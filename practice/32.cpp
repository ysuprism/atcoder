#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll n, x;
ll a[100009];

bool binary_search(ll target, ll left, ll right){
  if(left == right)return false;
  ll mid = (left + right) / 2;
  if(a[mid] == target)return true;
  if(a[mid] < target){
    return binary_search(target, mid+1, right);
  }else{
    return binary_search(target, left, mid);
  }
}

int main(){
  cin >> n >> x;
  for(int i = 0; i < n; i++)cin >> a[i];
  sort(a, a+n);
  bool res = binary_search(x, 0, n);
  if(res){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
