#include <iostream>
#include <vector>
using namespace std;

long gcd(long a, long b){
  while(a >= 1 && b >= 1){
    if(a > b){
      a = a % b;
    }else{
      b = b % a;
    }
  }
  if(a >= 1){
    return a;
  }else{
    return b;
  }
}

int main(){
  int n;
  long tmp;
  vector<long> a;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }
  tmp = a[0];
  for(int i = 1; i < n; i++){
    tmp = gcd(tmp, a[i]);
  }
  cout << tmp << endl;
}
