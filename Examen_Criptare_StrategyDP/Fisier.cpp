#include "Fisier.h"

Fisier::Fisier()
{
}

Fisier::Fisier(std::string nume_fisier)
{
	//Deschidere fisier
	std::ifstream f;
	f.open(nume_fisier);
	if (f) {
		//Se muta pointer la final
		f.seekg(0, f.end);

		//size se afla cu functia ftellg
		this->size = f.tellg();
		//se aloca spatiu pentru continut
		this->continut = new char[size];
		//se muta pointerul inapoi la inceputul fisierului pentru ca ramasase la final
		f.seekg(0, f.beg);

		char c;
		int i = 0;

		while (f >> c) {
			this->continut[i] = c;
			i++;
		}

		f.close();
	}
	else {
		FileNotOpened e("Fisierul nu se poate deschide");
		throw e;
	}
}

char* Fisier::get_continut()
{
	return this->continut;
}

int Fisier::get_size()
{
	return this->size;
}
