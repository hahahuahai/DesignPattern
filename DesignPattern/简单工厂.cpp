#include "stdafx.h"
#include <iostream>

class IDoor
{
public:
	virtual float GetWidth() = 0;
	virtual float GetHeight() = 0;
};

class WoodenDoor :public IDoor
{
public:
	WoodenDoor(float width, float height) :m_width(width), m_height(height) {}
	float GetWidth() override { return m_width; }
	float GetHeight() override { return m_height; }
protected:
	float m_width;
	float m_height;
};

class DoorFactory
{
public:
	DoorFactory();
	~DoorFactory();

	static IDoor* MakeDoor(float width, float height)
	{
		return new WoodenDoor(width, height);
	}

private:

};

DoorFactory::DoorFactory()
{
}

DoorFactory::~DoorFactory()
{
}

void main()
{
	IDoor* door = DoorFactory::MakeDoor(100, 200);
	std::cout << "Width:" << door->GetWidth() << std::endl;
	std::cout << "Height:" << door->GetHeight() << std::endl;
}