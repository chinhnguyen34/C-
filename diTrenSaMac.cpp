#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main () {
  ll sum = 0;
  ll coun = 0;
  vector<ll > negative;
  int n;
  cin >> n;
  for(int i = 0;i < n; i ++) {
    int tmp;
    cin >> tmp;
    if(tmp < 0) negative.push_back(tmp);
    else {
      sum += tmp;
      count ++;
    }
  }
  for(int i = 0; i < negative.size() - 1; i ++) {
    if(sum + negative[i] >= 0) {
      sum += negative[i];
      count ++;
    }
  }
  cout << count;
}
