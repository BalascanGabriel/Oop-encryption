#pragma once
#include "Fisier.h"
#include "iKey.h"
#include "KeyShift.h"
class iEngine
{
public:
	void encrypt(Fisier* f,iKey* k);
};

