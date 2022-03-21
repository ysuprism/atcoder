#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double a, b, h, m, x[2], y[2];
  cin >> a >> b >> h >> m;

  double arg_a = (h/6 + m/360) * M_PI;
  double arg_b = (m/30) * M_PI;
  x[0] = a * cos(arg_a);
  y[0] = a * sin(arg_a);
  x[1] = b * cos(arg_b);
  y[1] = b * sin(arg_b);

  double diff_x = x[0] - x[1];
  double diff_y = y[0] - y[1];
  double dis = sqrt(diff_x*diff_x + diff_y*diff_y);

  cout << fixed << setprecision(15) << dis << endl;
}
