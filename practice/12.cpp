#include <iostream>
#include <cmath>

using namespace std;

int main(){
  long n;

  cin >> n;

  for(long i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
