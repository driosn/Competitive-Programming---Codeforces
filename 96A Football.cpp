#include <iostream>
#include <string>

using namespace std;

int main(){
  string equipos;
  int jugador, contador = 0, maximo = 0;
  bool equipo_peligro;
  cin >> equipos;
  equipo_peligro = equipos[0];
  for(int i=0; i<equipos.size(); i++){
    jugador = equipos[i] - 48;
    if(jugador == equipo_peligro){
      contador++;
      if(contador > maximo) maximo = contador;
    }else{
      equipo_peligro = jugador;
      contador = 1;
    }
  }
  (maximo >= 7)? cout << "YES" : cout << "NO";
  return 0;
}
