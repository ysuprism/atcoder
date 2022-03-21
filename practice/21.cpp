#include <iostream>
using namespace std;

int main(){
  int n, r;
  long long n_fac = 1, r_fac = 1;

  cin >> n >> r;
  for(int i = 0; i < r; i++){
    n_fac *= n - i;
    r_fac *= i + 1;
  }

  cout << n_fac / r_fac << endl;
}
