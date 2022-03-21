#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  vector<int> primes;

  cin >> n;

  primes.push_back(2);

  for(int i = 3; i <= n; i++){
    bool flag = true;
    for(vector<int>::iterator itr = primes.begin(); itr != primes.end(); itr++){
      if(i % *itr == 0){
	flag = false;
	break;
      }
    }
    if(flag){
      primes.push_back(i);
    }
  }

  for(int i = 0; i < primes.size(); i++){
    if(i == primes.size() - 1){
      cout << primes[i] << endl;
    }else{
      cout << primes[i] << " ";
    }
  }
}
