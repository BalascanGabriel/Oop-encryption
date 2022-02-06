#pragma once
#include <iostream>
class iKey
{
public:
	virtual char* encrypt(char* nume_fisier, int size) = 0;
};

