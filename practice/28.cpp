#include <iostream>
#include <algorithm>
using namespace std;

int n, h[100009];
long long memo[100009];
bool done[100009] = { false };

long long fib(int k){
  if(done[k]){
    return memo[k];
  }

  if(k == 1){
    memo[k] = 0;
    done[k] = true;
    return 0;
  }

  if(k == 2){
    memo[k] = abs(h[2] - h[1]);
    done[k] = true;
    return memo[k];
  }

  long long ret = min(abs(h[k] - h[k-1]) + fib(k-1), abs(h[k] - h[k-2]) + fib(k-2));
  memo[k] = ret;
  done[k] = true;
  return ret;
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++)cin >> h[i];
  long long ans = fib(n);
  cout << ans << endl;
}
