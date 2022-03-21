#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n, tmp;
  double ans = 0, p, q;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> p >> q;
    ans += q / p;
  }
  cout << fixed << setprecision(15) << ans << endl;
}
