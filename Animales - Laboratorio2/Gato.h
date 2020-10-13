#ifndef GATO_H
#define GATO_H

#include "Animal.h"


class Gato :
	public Animal
{
public:
	Gato(void);
	~Gato(void);
	void hablar();
};

#endif