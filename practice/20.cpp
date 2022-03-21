#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, tmp, count = 0;
  vector<int> a;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    a.push_back(tmp);
  }

  for(int i = 0; i < n - 4; i++){
    for(int j = i + 1; j < n - 3; j++){
      for(int k = j + 1; k < n - 2; k++){
	for(int l = k + 1; l < n - 1; l++){
	  for(int m = l + 1; m < n; m++){
	    if(a[i] + a[j] + a[k] + a[l] + a[m] == 1000){
	      count++;
	    }
	  }
	}
      }
    }
  }

  cout << count << endl;
}
