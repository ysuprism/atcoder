#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
  double n, tmp, ans = 0.0;
  vector<int> b, r;
  double count_b[101] = { 0 }, count_r[101] = { 0 };

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    b.push_back(tmp);
  }
  for(int i = 0; i < n; i++){
    cin >> tmp;
    r.push_back(tmp);
  }

  for(int i = 0; i < n; i++){
    count_b[b[i]]++;
    count_r[r[i]]++;
  }

  for(int i = 1; i <= 100; i++){
    ans += i * count_b[i];
    ans += i * count_r[i];
  }
  ans /= n;

  cout << fixed << setprecision(15) << ans << endl;
}
