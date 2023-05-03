#pragma once
class Shape
{
protected:
	int width;
	int height;
	char symbol;
	string color;
	int** tab;
	int x, y;
public:
	static int counter;
	void Print();
	void Alloc();
	virtual void Fill() = 0;
	Shape(int h, char s, string c);
	~Shape();
	Shape* setXY(int x, int y);
	friend class Forest;
};

