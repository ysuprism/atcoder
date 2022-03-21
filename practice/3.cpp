#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
  int N, tmp, sum;
  vector<int> a;

  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  sum = accumulate(a.begin(), a.end(), 0);
  cout << sum << endl;
}
