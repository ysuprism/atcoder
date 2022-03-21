#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
  int max_n = max(a, b);
  int min_n = min(a, b);
  if(max_n % min_n == 0){
    return min_n;
  }

  return gcd(min_n, max_n % min_n);
}

int main(){
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
}
