#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, tmp;
  const int sum = 100000;
  vector<int> a;
  long long count[sum] = { 0 };
  long long ans = 0;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(int i = 0; i < n; i++){
    count[a[i]]++;
  }

  for(int i = 1; i < 50000; i++){
    ans += count[i] * count[sum - i];
  }
  ans += count[50000] * (count[50000] - 1) / 2;

  cout << ans << endl;
}
