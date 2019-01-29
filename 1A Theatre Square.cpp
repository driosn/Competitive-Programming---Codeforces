#include <iostream>

using namespace std;

int main(){
  long long int n, m , a, p1, p2;
  cin >> n >> m >> a;
  p1 = n/a;
  if(n%a != 0){
    p1++;
  }
  p2 = m/a;
  if(m%a !=0){
    p2++;
  }
  cout << p1*p2;
  return 0;
}
