#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

class Perro :
	public Animal
{
public:
	Perro(void);
	~Perro(void);
	void hablar();
};

#endif