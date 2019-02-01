#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int sumatoria = 0;
  int contador = 0;
  int n;
  cin >> n;
  int v[n];
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  sort(v, v+n);

  int k = 0;
  int i = n - 1;
  while(k != i){
    if(v[k] + v[i] <= 4){
      v[i] += v[k];
      k++;
    }else{
      i--;
      contador++;
    }
  }
  cout << contador+1;

  return 0;
}
