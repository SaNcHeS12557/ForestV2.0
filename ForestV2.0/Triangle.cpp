#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle(int h, char s, string c, triangleType t) : Shape(h, s, c) {
	width = h;
	Alloc();
	type = t;
    Fill(); // najpierw typ
}

void Triangle::Fill() {
    int i, j;
    switch (type) {
    case LT:
        for (j = 0; j < height; j++) {
            for (i = 0; i < height - j; i++) {
                tab[j][i] = 1;
            }
        }
        break;
    case RT:
        for (j = 0; j < height; j++) {
            for (i = j; i < height; i++) {
                tab[j][i] = 1;
            }
        }
        break;
    case RB:
        for (j = 0; j < height; j++) {
            for (i = height - j - 1; i < height; i++) {
                tab[j][i] = 1;
            }
        }
        break;
    case LB:
        for (j = 0; j < height; j++) {
            for (i = 0; i <= j; i++) {
                tab[j][i] = 1;
            }
        }
        break;
    }
}