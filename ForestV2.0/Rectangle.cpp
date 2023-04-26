#include <iostream>
#include <windows.h>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(int h, int w, char s, string c):Shape(h, s, c) {
	cout << "Konstruktor rectangle z parametrami\n";
	width = w;
	Alloc();
	Fill();

}

Rectangle::Rectangle(int h, char s, string c) :Shape(h, s, c) {
	cout << "Konstruktor rectangle z parametrami bez h czyli square\n";
	width = h;
	Alloc();
	Fill();

}

void Rectangle::Fill() {
	int i, j;
	for (j=0;j<height;j++)
	{
		for (i = 0; i < width; i++)
			tab[j][i] = 1;
	}
}