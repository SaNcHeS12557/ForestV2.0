#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle(int h, char s, string c) :Shape(h, s, c) {
	width = h;
	Alloc();
	Fill();
} 

void Triangle::Fill() {
	int i, j;
	for (j = 0; j < height; j++) {
		for (i = 0; i <= j; i++) {
			tab[j][i] = 1;
		}
	}
}