#include <iostream>
using namespace std;
using ll = long long;

ll a[100009], b[100009];
int main(){
  int n, q, l, r;
  cin >> n >> q;
  for(int i = 1; i <= n; i++)cin >> a[i];

  b[0] = 0;
  for(int i = 1; i <=n; i++){
    b[i] = b[i-1] + a[i];
  }

  for(int i = 0; i < q; i++){
    cin >> l >> r;
    cout << b[r] - b[l-1] << endl;
  }
}
