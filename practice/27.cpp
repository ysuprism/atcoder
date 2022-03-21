#include <iostream>
#include <vector>
using namespace std;

int n, a[200009], b[200009];
void merge_sort(int *a, int left, int right){
  if(left + 1 < right){
    int mid = (left + right) / 2;
    merge_sort(a, left, mid);
    merge_sort(a, mid, right);

    for(int i = left; i < right; i++){
      b[i] = a[i];
    }
    int i, j, k;
    for(i = left, j = mid, k = left; i < mid && j < right; k++){
      if(b[i] < b[j]){
	a[k] = b[i++];
      }else{
	a[k] = b[j++];
      }
    }
    if(i == mid && j < right){
      while(j < right){
	a[k++] = b[j++]; 
      }
    }else if(i < mid && j == right){
      while(i < mid){
	a[k++] = b[i++];
      }
    }
  }
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  merge_sort(a, 0, n);

  for(int i = 0; i < n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
