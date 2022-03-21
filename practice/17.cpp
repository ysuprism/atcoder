#include <iostream>
#include <vector>
using namespace std;

long gcd(long a, long b){
  if(b == 0){
    return a;
  }else{
    return gcd(b, a % b);
  }
}

long lcm(long a, long b){
  long g = gcd(a, b);
  return a / g * b;
}

int main(){
  int n;
  long l, tmp;
  vector<long> a;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  l = lcm(a[0], a[1]);
  for(int i = 1; i < n-1; i++){
    l = lcm(l, a[i+1]);
  }

  cout << l << endl;
}
