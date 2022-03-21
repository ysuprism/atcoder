#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  double ans = 0, tmp;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    ans += tmp / 3;
  }
  for(int i = 0; i < n; i++){
    cin >> tmp;
    ans += tmp * 2 / 3;
  }
  cout << fixed << setprecision(15) << ans << endl;
}
