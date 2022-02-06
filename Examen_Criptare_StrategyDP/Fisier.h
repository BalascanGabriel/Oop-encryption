#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "iException.h"
class Fisier
{
private:
	std::string nume_fisier;
	char* continut;
	int size;
public:
	Fisier();
	Fisier(std::string nume_fisier);
	char* get_continut();
	int get_size();
};

