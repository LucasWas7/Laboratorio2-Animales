#ifndef VACA_H
#define VACA_H

#include "Animal.h"

class Vaca :
	public Animal
{
public:
	Vaca(void);
	~Vaca(void);
	void hablar();
};

#endif
