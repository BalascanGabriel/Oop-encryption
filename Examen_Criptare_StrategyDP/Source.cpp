#include <iostream>
#include "Fisier.h"
#include "iEngine.h"
#include "KeyShift.h"
#include "KeyXor.h"

using namespace std;


int main(void) {
	try {
		Fisier* f = new Fisier("file.txt");
		iEngine* engine1 = new iEngine();

		KeyShift* key1 = new KeyShift(3);
		KeyXor* key2 = new KeyXor((char*)"andreea", 3);

		engine1->encrypt(f, key1);
		engine1->encrypt(f, key2);

	}
	catch (FileNotOpened* e) {
		e->show_error();
	}
	



	cout << "\nCOMPILEAZA\n";
	return 0;
}