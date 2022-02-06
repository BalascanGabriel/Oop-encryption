#pragma once
#include "iKey.h"
class KeyShift :
	public iKey
{
private:
	int key;
public:
	KeyShift();
	KeyShift(int key);

	char* encrypt(char* nume_fisier, int size);
};

