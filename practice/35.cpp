#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

double get_distance(double *x, double *y){
  double x_diff = x[0] - x[1];
  double y_diff = y[0] - y[1];
  double res = sqrt(x_diff*x_diff + y_diff*y_diff);
  return res;
}

int main(){
  double x[2], y[2], r1, r2;
  cin >> x[0] >> y[0] >> r1;
  cin >> x[1] >> y[1] >> r2;

  double dis = get_distance(x, y);
  int ans;

  if(dis > r1 + r2){
    ans = 5;
  }else if(dis == r1 + r2){
    ans = 4;
  }else{
    double min_r = min(r1, r2);
    double max_r = max(r1, r2);
    if(dis + min_r > max_r){
      ans = 3;
    }else if(dis + min_r == max_r){
      ans = 2;
    }else{
      ans = 1;
    }
  }

  cout << ans << endl;
}
