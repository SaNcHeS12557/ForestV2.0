#include "Tree.h"


class Forest {
private:
    int** tab;
    int tabX, tabY;
    vector<Tree*> trees;

public:

    Forest();
    ~Forest();

    void printTab();
    void AddTree(int y, int x, int h, char s, string color);




};