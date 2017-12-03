#pragma once
class Singleton
{
private:
	Singleton();
	~Singleton();
	static Singleton* uniqueInstance;

public:
	static Singleton* getInstance();
};

