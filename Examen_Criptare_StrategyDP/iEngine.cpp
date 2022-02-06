#include "iEngine.h"

void iEngine::encrypt(Fisier* f, iKey* k)
{
	char* continut = f->get_continut();
	int size = f->get_size();
	std::cout << "\n\nBefore encryption:";
	for (int i = 0; i < size; i++)
		printf("%x ", continut[i]);

	char* encrypted = k->encrypt(continut,size);

	std::cout << "\n\nAfter encryption:";
	for (int i = 0; i < size; i++)
		printf("%x ", encrypted[i]);

}
