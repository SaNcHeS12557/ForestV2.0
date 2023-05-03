#include <iostream>
#include <vector>

using namespace std;

#include "Forest.h"

Forest::Forest(int width, int height) : tabX(width), tabY(height)
{
    int i;
    tab = new int* [tabY];
    for (i = 0; i < tabY; i++)
        tab[i] = new int[tabX];
}

Forest::~Forest()
{
    int i;

    for (i = 0; i < tabY; i++)
        delete tab[i];
    delete tab;

    for (auto t : trees)
        delete t;
    trees.clear();

}

void Forest::printTab()
{
    int i, j, ind;
    for (i = 0; i < tabY; i++) {
        for (j = 0; j < tabX; j++) {
            ind = tab[i][j];
            if (ind > 0 && ind <= trees.size()) // jezeli index w tab > 0 i index w wektorze <= wektoru trees, to wydrukowac drzewko
            {
                cout << trees[ind - 1]->color;
                cout << trees[ind - 1]->symbol;
            }
            else
            {
                cout << ' ';
            }
        }

        cout << endl;
        cout << "\033[0m";
    }
}


//void Forest::AddTree(int x, int y, int h, char s, string color) {
//    int i, j;
//    Tree* t = new Tree(h, s, color);
//    trees.push_back(t);
//
//    for (i = 0; i < t->height; i++) {
//        for (j = 0; j < t->getWidth(); j++) {
//            if ((i + x) < tabY && (j + y) < tabX) { // jezeli
//                if (t->tab[i][j]) {
//                    tab[i + x][j + y] = trees.size();
//                }
//            }
//        }
//    }
//}

Forest& Forest::operator+=(Shape* sh) {
    this->AddShape(sh, sh->y, sh->x);
    return *this;

}

void Forest::AddShape(Shape* sh, int y, int x) {
    int i, j;
    sh->x = x;
    sh->y = y;

    trees.push_back(sh);

    for (j = 0; j < sh->height; j++) {
        for (i = 0; i < sh->width; i++) {
            if (sh->tab[j][i])
                tab[j + y][i + x] = sh->tab[j][i] * trees.size();
        }
    }
}