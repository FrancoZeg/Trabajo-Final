#include <string>
using namespace std;

class Jugador {
public:
  Jugador(int vidaJ, int dañoJ, string nombreJ) {
    vida = vidaJ;
    daño = dañoJ;
    nombre = nombreJ;
  }

  int getVida() const {
    return vida;
  }
      
  int getDaño() const {
    return daño;
  }

  string getNombre() const {
    return nombre;
  }

  void ataquePerro(int dañoPerro) {
    vida -= dañoPerro;
  }

  void setDaño(){
    daño += 6;
  }

  void esquiveExitoso(){
    daño += 2;
  }

  void setVida(){
    if (vida < 100 && vida >= 75){
      vida = 100;
    } else if (vida < 75){
      vida += 25;
    }
  }

private:
  int vida, daño;
  string nombre;
};