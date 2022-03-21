#include <iostream>

using namespace std;

int main(){
  int N, x, y;
  int x_num, y_num, xy_num;

  cin >> N >> x >> y;

  x_num = N / x;
  y_num = N / y;
  xy_num = N / (x*y);

  cout << x_num + y_num - xy_num << endl;
}
