#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int n;
double x[2009], y[2009];

int main(){
  cin >> n;
  for(int i = 0; i < n; i++)cin >> x[i] >> y[i];

  double ans = 1000000000;
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      double diff_x = x[i] - x[j];
      double diff_y = y[i] - y[j];
      double tmp = sqrt(diff_x * diff_x + diff_y * diff_y);
      if(tmp < ans)ans = tmp;
    }
  }
  cout << fixed << setprecision(15) << ans << endl;
}
