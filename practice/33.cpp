#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;


int main(){
  double a[2], b[2], c[2], d;
  cin >> a[0] >> a[1];  
  cin >> b[0] >> b[1];  
  cin >> c[0] >> c[1];

  double p = a[1] - b[1];
  double q = a[0] - b[0];
  d = abs(p * (c[0] - a[0]) + q * (c[1] - a[1]));
  d /= sqrt(p*p + q*q);

  cout << fixed << setprecision(15) << d << endl;;
}
