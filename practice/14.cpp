#include <iostream>
#include <cmath>

using namespace std;

void fact(long n){
  for(long i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      cout << i << " ";
      fact(n/i);
      return;
    }
  }
  cout << n << " ";
}

int main(){
  long n;
  cin >> n;
  fact(n);
  cout << endl;
}
