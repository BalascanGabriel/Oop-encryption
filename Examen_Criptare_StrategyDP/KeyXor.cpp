#include "KeyXor.h"
KeyXor::KeyXor()
{
}

KeyXor::KeyXor(char* octeti, int dimensiune)
{
	//alocam memorie pentru octetii cu care vom face xor-ul
	this->octeti = new char[dimensiune];
	memcpy(this->octeti, octeti, dimensiune);
}

char* KeyXor::encrypt(char* fisier, int size)
{
	char* encrypted = new char[size];

	int j = 0;
	for (int i = 0; i < size; i++)
	{
		encrypted[i] = fisier[i] ^ this->octeti[j];
		if (j == this->size)
			j = 0;
		j++;
	}

	return encrypted;
}