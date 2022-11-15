#ifndef __PERRO_H__
#define __PERRO_H__

#include <iostream>
#include <string>
#include "Enemigo.h"
using namespace std;

class Perro : public Enemigo {
public:
  Perro(int vidaP, int dañoP, string nombreP, int dientesP): Enemigo(vidaP, dañoP, nombreP) {setDientes(dientesP);}

  void Mordisco(int dientes){
    cout << "EL PERRO HINCÓ SUS " << dientes << " EN TU PIERNA" << endl;
  }

  void setDientes (int dientesP){
    dientes = dientesP;
  }

  void AtaqueCritico(bool bate) {
    if (vida - 18 > 0 && vida - 12 > 0) {
      if (bate == true) {
        vida -= 22;
      } else {
        vida -= 15;
      }
      cout << "¡¡¡GOLPE CRÍTICO!!! POBRE PERRO LE QUEDAN " << vida << " PUNTOS DE VIDA Y PERDIÓ UNO DE SUS DIENTES" << endl;
      if (dientes > 0)
        dientes -= 1;
    } else {
      if (bate == true) {
        vida -= 18;
      } else {
        vida -= 12;
      }
      cout << "¡¡¡GOLPE CRÍTICO!!! EL PERRO ESTÁ MORIBUNDO, EL PERRO PERDIÓ UNO DE SUS DIENTES" << endl;
      if (dientes > 0)
        dientes -= 1;
    }
  }

  int getDientes() const {
    return dientes;
  }

private:
  int dientes;
};

#endif