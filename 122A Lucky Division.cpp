#include <iostream>

using namespace std;

int main(){
  int lucky[9] = {4, 7, 47, 74, 447, 474, 744, 477, 774};
  int number;
  cin >> number;
  bool flag = false;
  for(int i=0; i<9; i++){
    if(number%lucky[i] == 0) flag = true;
  }
  (flag == true)? cout << "YES" : cout << "NO";
}
