//Made By Phuong Nam PROPTIT <3//
#pragma GCC Optimize("O3")
#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define sp(x) cout<<x<<" "
#define en(x) cout<<x<<endl
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int n,q;
struct sv
{
    string ma,ten,lop,mail,cty;
    int stt;
};
bool ss(sv a,sv b) {return a.ma<b.ma;}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  cin>>n;
  struct sv a[n];
  f0(i,n)
  {
      cin>>a[i].ma;
      cin.ignore();
      getline(cin,a[i].ten);
      cin>>a[i].lop>>a[i].mail>>a[i].cty;
      a[i].stt=i+1;
  }
  sort(a,a+n,ss);
  cin>>q;
  f1(i,q)
  {
      string s;
      cin>>s;
      f0(i,n)
      {
          if(a[i].cty==s) cout<<a[i].stt<<' '<<a[i].ma<<' '<<a[i].ten<<' '<<a[i].lop<<' '<<a[i].mail<<' '<<a[i].cty<<'\n';
      }
  }
}
//-----YEU CODE HON CRUSH-----//
