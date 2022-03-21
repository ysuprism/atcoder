#include <iostream>
#include <cmath>

using namespace std;

int main(){
  long n; 
  long double sr;

  cin >> n;

  for(long i = 1; i < sqrt(n); i++){
    if(n % i == 0){
      cout << i << endl;
      cout << n / i << endl; 
    }
  }

  sr = sqrt(n);
  if((sr - floor(sr)) == 0){
    cout << sr << endl;
  }
}
