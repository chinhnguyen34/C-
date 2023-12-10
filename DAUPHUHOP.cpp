#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;
const int N=1e6+3;
void sort(int a[],int l,int r)
{
	int mid=a[(l+r)/2],i=l,j=r;
	while(i<=j)
	{
		while(a[i]<mid) i++;
		while(a[j]>mid) j--;
		if(i<=j)
		{
			int s=a[i];
			a[i]=a[j];
			a[j]=s;
			i++;j--;
		}
	}
	if(i<r) sort(a,i,r);
	if(l<j) sort(a,l,j);
}
void xuly()
{
	int n;
	scanf("%d",&n);
	int a[n+5],b[n+5];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++) scanf("%d",&b[i]);
	sort(a,0,n-1);
	sort(b,0,n-1);
	for(int i=0;i<n;i++)
	{
		if(a[i]>b[i])
		{
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

