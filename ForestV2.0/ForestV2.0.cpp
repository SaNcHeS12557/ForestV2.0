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

int Shape::counter = 0; // liczba objektow

void drawHouse(int x, int y, Forest& las) {
    Rectangle* walls = new Rectangle(5, 14, '*', "green");
    Rectangle* door = new Rectangle(3, 3, '*', "yellow");
    Trapeze* roof = new Trapeze(4, '*', "red");
    Border* window = new Border(3, 3, '#', "red", 1);

    _Tree* leaves = new _Tree(5, '*', "green");
    Rectangle* trunk = new Rectangle(1, 3, '#', "red");


    roof->setXY(x, y);
    las += roof;
    walls->setXY(x+3, y+4);
    las += walls;
    door->setXY(x+5, y+6);
    las += door;
    window->setXY(x+10, y+5);
    las += window;
}

int main() {

    Forest las = Forest(30, 100);

    //las.AddShape(door, 4, 7);

    drawHouse(10, 10, las);
    drawHouse(1, 1, las);
    drawHouse(10, 20, las);

    las.printTab();
}