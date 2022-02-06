#pragma once
#include "iKey.h"
class KeyXor :
	public iKey
{
private:
	char* octeti;
	int size;
public:
	KeyXor();
	KeyXor(char* octeti, int dimensiune);

	char* encrypt(char* fisier, int size) ;

	~KeyXor();
};

