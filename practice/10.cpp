#include <iostream>

using namespace std;

long fact(int n){
  if(n == 1){
    return 1;
  }

  return n * fact(n-1);
}

int main(){
  int n; 
  long ans;

  cin >> n;

  ans = fact(n);

  cout << ans << endl;
}
