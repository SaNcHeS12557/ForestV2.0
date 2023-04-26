#pragma once
#include"Shape.h"
class _Tree :public Shape
{
public:
	using Shape::Shape;

	virtual void Fill();
	_Tree(int h, char s, string c);
};

