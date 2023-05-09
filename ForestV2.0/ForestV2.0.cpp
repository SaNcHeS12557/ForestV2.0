#include <iostream>
#include <vector>
using namespace std;

#include "Forest.h"
#include"Shape.h"
#include"Rectangle.h"
#include "Triangle.h"
#include "_Tree.h"
#include "Border.h"
#include "Trapeze.h"

//int Tree::counter = 0; // liczba drzew
int Shape::counter = 0; // liczba objektow

int main() {
    // Add Tree Function - y, x, h-height, s-symbol, c-color)
    //Forest las;
    //las.AddTree(3, 3, 5, '*', "green");
    //las.AddTree(5, 40, 10, '#', "bgreen");
    //las.AddTree(7, 5, 7, '#', "red");

    //las.printTab();
    Forest las = Forest(15, 60);

    Rectangle* p = new Rectangle(5, 7, '*', "green");
    Rectangle* k = new Rectangle(5, '*', "green");

    //Border* b = new Border(*p, 1);
    _Tree* c = new _Tree(5, '*', "red");

    las.AddShape(p, 2, 2);
    las.AddShape(k, 7, 20);
    //las.AddShape(b, 3, 40);

    c->setXY(33, 4);
    las += c;

    las.printTab();
}