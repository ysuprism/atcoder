#include <iostream>
#include <algorithm>
using namespace std;

long long n0, w0;
long long memo[109][100009], arr_w[109], arr_v[109];
bool done[109][100009] = { false };

long long rec(int n, int w){
  if(done[n][w])return memo[n][w];

  if(n == n0 + 1){
    memo[n][w] = 0;
    done[n][w] = true;
    return 0;
  }

  if(w < arr_w[n]){
    memo[n][w] = rec(n+1, w);
    done[n][w] = true;
    return memo[n][w];
  }else{
    memo[n][w] = max(rec(n+1, w), arr_v[n] + rec(n+1, w - arr_w[n]));
    done[n][w] = true;
    return memo[n][w];
  }
}

int main(){
  cin >> n0 >> w0;
  for(int i = 1; i <= n0; i++){
    cin >> arr_w[i] >> arr_v[i];
  }
  cout << rec(1, w0) << endl;
}
