#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n;
long long a[500009], memo[500009];

long long max_exp(int d){
  if(memo[d] != -1)return memo[d];
  if(d == n+1)return 0;
  if(d == n)return a[d];
  return memo[d] = max(a[d] + max_exp(d+2), max_exp(d+1));
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++)cin >> a[i];
  memset(memo, -1, sizeof(memo));
  cout << max_exp(1) << endl;
}
