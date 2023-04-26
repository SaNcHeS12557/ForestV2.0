#include <iostream>
using namespace std;
#include "_Tree.h"

_Tree::_Tree(int h, char s, string c) :Shape(h, s, c) {
	width = 2*h-1;
	Alloc();
	Fill();
}

void _Tree::Fill() {
    int i, j;

	for (j = 0; j < height; j++) {
		for (i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}
	for (j = 0; j < height; j++)
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;

}