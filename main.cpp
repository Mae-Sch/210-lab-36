#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    StringBinaryTree Tree;
    
    ifstream in_file("codes.txt");

    if (!in_file.is_open()) {
        cout << "error: input file could not be opened\n";
        return -1; 
    }

    while (true) {
        string tempString;
        in_file >> tempString;
        if (in_file.eof())
            break;
        Tree.insertNode(tempString);
    }

    Tree.displayInOrder();

    return 0;
}