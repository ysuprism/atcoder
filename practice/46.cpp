#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;
using ll = long long;

int main(){
  ll row, col;
  ll ans[59][59], s[2], g[2];
  char c[59][59];
  queue<pair<ll, ll> > q;
  

  cin >> row >> col;
  cin >> s[0] >> s[1];
  cin >> g[0] >> g[1];
  for(int i = 1; i <= row; i++){
    for(int j = 1; j <= col; j++){
      cin >> c[i][j];
    }
  }

  memset(ans, -1, sizeof(ans));
  ans[s[0]][s[1]] = 0;
  pair<ll, ll> *p = new pair<ll, ll>(s[0], s[1]);
  q.push(*p);

  while(!q.empty()){
    p = &q.front();
    ll i = p->first, j = p->second;
    if(c[i+1][j] == '.'){
      if(ans[i+1][j] == -1){
	ans[i+1][j] = ans[i][j] + 1;
	p = new pair<ll, ll>(i+1, j);
	q.push(*p);
      }
    }
    if(c[i-1][j] == '.'){
      if(ans[i-1][j] == -1){
	ans[i-1][j] = ans[i][j] + 1;
	p = new pair<ll, ll>(i-1, j);
	q.push(*p);
      }
    }
    if(c[i][j+1] == '.'){
      if(ans[i][j+1] == -1){
	ans[i][j+1] = ans[i][j] + 1;
	p = new pair<ll, ll>(i, j+1);
	q.push(*p);
      }
    }
    if(c[i][j-1] == '.'){
      if(ans[i][j-1] == -1){
	ans[i][j-1] = ans[i][j] + 1;
	p = new pair<ll, ll>(i, j-1);
	q.push(*p);
      }
    }
    q.pop();
  }
  cout << ans[g[0]][g[1]] << endl;
}
