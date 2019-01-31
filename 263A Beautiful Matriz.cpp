#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int fila, columna;
  bool matriz[5][5];
  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      cin >> matriz[i][j];
      if(matriz[i][j] == 1){
        fila = i;
        columna = j;
      }
    }
  }
  int val_filas, val_columnas;
  val_filas = abs(3-fila); val_columnas = abs(3-columna);
  int pasos = val_filas + val_columnas;
  cout << pasos;


  return 0;
}
