#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Vaca.h"
#include "Oveja.h"

#include <iostream>
using namespace std;

int main()
{
	Animal* perro = new Perro();
	Animal* gato = new Gato();
	Animal* vaca = new Vaca();
	Animal* oveja = new Oveja();
	
	perro->hablar();
	gato->hablar();
	vaca->hablar();
	oveja->hablar();

	return 0;
}