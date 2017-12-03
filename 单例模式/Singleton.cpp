#include "stdafx.h"
#include "Singleton.h"


Singleton::Singleton()
{
}


Singleton::~Singleton()
{
	if (uniqueInstance == NULL)
	{
		return;
	}
	delete uniqueInstance;
	uniqueInstance = 0;
}

Singleton * Singleton::getInstance()
{
	if (uniqueInstance == NULL)
	{
		uniqueInstance = new Singleton;
	}
	return uniqueInstance;
}
