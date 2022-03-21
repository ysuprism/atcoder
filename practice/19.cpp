#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, tmp;
  long long ans, num[3] = { 0 };
  vector<int> a;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(int i = 0; i < n; i++){
    if(a[i] == 1){
      num[0]++;
    }else if(a[i] == 2){
      num[1]++;
    }else{
      num[2]++;
    }
  }

  ans = (num[0] * (num[0] - 1)) / 2 + 
        (num[1] * (num[1] - 1)) / 2 +
        (num[2] * (num[2] - 1)) / 2;

  cout << ans << endl;
}
