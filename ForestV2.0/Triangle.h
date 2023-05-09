#pragma once
#include"Shape.h"

enum triangleType { LT, RT, RB, LB }; // LT - left top, RT - right top, RB - right bottom, LB - left bottom

class Triangle :public Shape
{
public:
	using Shape::Shape;

	virtual void Fill();
	Triangle(int h, char s, string c, triangleType t);
	triangleType type;

};

