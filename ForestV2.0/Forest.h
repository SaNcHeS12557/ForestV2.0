#include "Tree.h"
#include"Shape.h"


class Forest {
private:
    int** tab;
    int tabX, tabY;
    //vector<Tree*> trees;
    vector<Shape*>trees;

public:
    Forest(int y, int x);
    ~Forest();

    void printTab();
    // void AddTree(int y, int x, int h, char s, string color);
    void AddShape(Shape* sh, int y, int x);

    Forest& operator+=(Shape* sh);
};