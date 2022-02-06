#include "KeyShift.h"

KeyShift::KeyShift()
{
}

KeyShift::KeyShift(int key)
{
	this->key = key;
}

char* KeyShift::encrypt(char* nume_fisier, int size)
{
	//alocam un spatiu nou pentru textul criptat
	char* text_criptat = new char[size];
	//mutam memoria din fisier in noul buffer
	memcpy(text_criptat, nume_fisier, size);

	for (int i = 0; i < this->key; i++) {

		unsigned char aux = text_criptat[size - 1];
		for (int j = size - 1; j > 0; j--)
			text_criptat[j] = text_criptat[j - 1];
		text_criptat[0] = aux;
	}
	return text_criptat;
}
