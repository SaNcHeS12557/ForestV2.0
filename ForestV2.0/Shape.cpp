#include <iostream>
#include <windows.h>
using namespace std;
#include "Shape.h"

// 
void Shape::Print() {
	int i, j;

	cout << color;

	for (j = 0; j < height; j++) {
		for (i = 0; i < width; i++)
			if (tab[j][i]) {
				cout << color;
				cout << symbol;
			}
			else
				cout << ' ';
		cout << endl;
	}

	cout << "\033[0m";

}
//

// Konstruktor Shape z parametrami
Shape::Shape(int h, char s, string c) {
	int i, j;
	height = h;
	width = 1;
	symbol = s;

	if (c == "green")
		color = "\033[1;32m";
	if (c == "red") 
		color = "\033[1;31m";
	if (c == "yellow")
		color = "\033[1;33m";

	counter++;

}
//

// selecting Memory For Matrix
void Shape::Alloc() {
	int i, j;
	tab = new int* [height];
	for (j = 0; j < height; j++) {
		tab[j] = new int[width];
		for (i = 0; i < width; i++)
			tab[j][i]=0;
	}

}
//

// shape Destructor
Shape::~Shape() {
	int j;
	counter--;
	cout << "Destruktor shape: kasuje shape\nZostalo: " << counter << "\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;

}
//