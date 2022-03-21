#include <iostream>
using namespace std;

int n;
long long memo[50];

int main(){
  cin >> n;
  memo[1] = 1;
  memo[2] = 2;
  for(int i = 3; i <= n; i++){
    memo[i] = memo[i-1] + memo[i-2];
  }
  cout << memo[n] << endl;
}
