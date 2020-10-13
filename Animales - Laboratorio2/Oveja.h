#ifndef OVEJA_H
#define OVEJA_H

#include "Animal.h"

class Oveja :
	public Animal
{
public:
	Oveja(void);
	~Oveja(void);
	void hablar();
};

#endif
