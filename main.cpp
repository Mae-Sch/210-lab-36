#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
using namespace std;

int main() {
    StringBinaryTree Tree;
    
    ifstream in_file("codes.txt");

    if (!in_file.open()) {
        cout << "error: codes.txt could not be opened\n";
        return -1; 
    }

    return 0;
}