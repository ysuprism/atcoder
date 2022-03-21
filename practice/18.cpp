#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, tmp;
  long long ans, num[4] = { 0 };
  vector<int> a;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(int i = 0; i < n; i++){
    if(a[i] == 100){
      num[0]++;
    }else if(a[i] == 200){
      num[1]++;
    }else if(a[i] == 300){
      num[2]++;
    }else{
      num[3]++;
    }
  }

  ans = num[0] * num[3] + num[1] * num[2];
  cout << ans << endl;
}
