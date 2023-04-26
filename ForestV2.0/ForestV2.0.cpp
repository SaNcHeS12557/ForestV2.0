#include <iostream>
#include <vector>
using namespace std;

#include "Forest.h"
#include"Shape.h"
#include"Rectangle.h"

int Tree::counter = 0; // liczba drzew
int Shape::counter = 0; // liczba shapow

int main() {
    // Add Tree Function - y, x, h-height, s-symbol, c-color)
    //Forest las;
    //las.AddTree(3, 3, 5, '*', "green");
    //las.AddTree(5, 40, 10, '#', "bgreen");
    //las.AddTree(7, 5, 7, '#', "red");

    //las.printTab();

    Rectangle p(5, 7, '*', "green");
    Rectangle k(5, '*', "green");

    p.Print();
    cout << endl;
    k.Print();
    cout << endl;


}