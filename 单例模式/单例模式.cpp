// 单例模式.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Singleton.h"

using namespace std;

Singleton* Singleton::uniqueInstance = NULL;

int main()
{
	Singleton* singleton1 = Singleton::getInstance();
	Singleton* singleton2 = Singleton::getInstance();

	if (singleton1 == singleton2)
	{
		cout << "Got same singleton!!!" << endl;
	}
    return 0;
}

