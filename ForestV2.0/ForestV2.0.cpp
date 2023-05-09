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
    Forest las = Forest(30, 100);

    Rectangle* walls = new Rectangle(5, 14, '*', "green");
    Rectangle* door = new Rectangle(3, 3, '*', "yellow");
    _Tree* leaves = new _Tree(5, '*', "green");
    Rectangle* trunk = new Rectangle(1, 3, '#', "red");
    Trapeze* roof = new Trapeze(4, '*', "red");
    Border* window = new Border(3, 3, '#', "red", 1);

    //las.AddShape(door, 4, 7);

    roof->setXY(3, 1);
    las += roof;
    walls->setXY(6, 5);
    las += walls;
    door->setXY(8, 7);
    las += door;
    window->setXY(13, 6);
    las += window;


    las.printTab();
}