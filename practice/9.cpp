#include <iostream>
#include <vector>

#define MAX_N 60
#define MAX_S 10000

using namespace std;

int n, s;
vector<int> a;
bool done[MAX_N][MAX_S + 1];
bool memo[MAX_N][MAX_S + 1];

bool dp(int i, int sum){
  if(done[i][sum]){
    return memo[i][sum];
  }

  if(i == n){
    return false;
  }

  if(a[i] == sum){
    done[i][sum] = true;
    memo[i][sum] = true;
    return true;
  }

  if(a[i] < sum){
    if(dp(i+1, sum - a[i])){
      done[i][sum] = true;
      memo[i][sum] = true;
      return true;
    }
  }

  if(dp(i+1, sum)){
    done[i][sum] = true;
    memo[i][sum] = true;
    return true;
  }

  done[i][sum] = true;
  return false;
}

int main(){
  int tmp;

  cin >> n >> s;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(int i = 0; i < MAX_N; i++){
    for(int j = 1; j <= MAX_S; j++){
      done[i][j] = false;
      memo[i][j] = false;
    }
  }

  if(dp(0, s)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
