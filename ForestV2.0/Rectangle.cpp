#include <iostream>
#include <windows.h>
using namespace std;
#include "Rectangle.h"


// Konstruktor rectangle z parametrami
Rectangle::Rectangle(int h, int w, char s, string c) : Shape(h, s, c) {
	width = w;
	Alloc(); // teraz bo nie znalismy width
	Fill();

}
//


// Konstruktor rectangle z parametrami bez h czyli square
Rectangle::Rectangle(int h, char s, string c) : Shape(h, s, c) {
	width = h;
	Alloc();
	Fill();

}
//


// Konstruktor rectangle kopiujacy
Rectangle::Rectangle(Rectangle& p) : Shape(p.height, p.symbol, p.colorname) {
	width = p.width;
	Alloc();
	Fill();
}
//


void Rectangle::Fill() {
	int i, j;
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			tab[j][i] = 1;
	}
}