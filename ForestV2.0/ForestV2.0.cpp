#include <iostream>
#include <vector>
using namespace std;

#include "Forest.h"

int Tree::counter = 0;

int main() {
    // Add Tree Function - y, x, h-height, s-symbol, c-color)
    Forest las;
    las.AddTree(3, 3, 5, '*', "green");
    las.AddTree(5, 40, 10, '#', "bgreen");
    las.AddTree(7, 5, 7, '#', "red");

    las.printTab();

}