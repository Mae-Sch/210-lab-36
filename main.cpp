#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
using namespace std;

const string FILENAME = "codes.text";

int main() {
    StringBinaryTree Tree;
    
    ifstream in_file(FILENAME);

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

    cout << "BST created from " << FILENAME << endl;
    const string MENU = "A - add element\nD - delete element\nS - Search\nE - exit program\nchoice: ";

    cout << MENU;
    char choice;
    cin >> choice;
    while (choice != 'E') {
        switch(choice) {
            case 'A':
            break;
            case 'D':
            break;
            case 'S'
            break;
            default:
                "invalid choice. try again";
        }
        cout << MENU;
        cin >> choice;
    }

    return 0;
}