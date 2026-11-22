#include <iostream>
#include "StringBinaryTree.h"
#include <fstream>
using namespace std;

const string FILENAME = "codes.txt";

int main() {
    StringBinaryTree Tree;
    
    ifstream in_file(FILENAME);

    // error checking for file
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
    const string MENU = "A - add element\nD - delete element\nS - Search\nO - inOrder display\nE - exit program\nchoice: ";

    cout << MENU;
    char choice;
    cin >> choice;
    // loops until user decided to end the program
    while (choice != 'E') {
        string element;
        switch(choice) {
            case 'A':
                cout << "what string would you like to add?\n";
                cin >> element;
                if (!Tree.searchNode(element)) {
                    Tree.insertNode(element);
                    cout << "string " << element << " inserted!\n";
                } else {
                    cout << element << " is already in the tree\n";
                }
            break;
            case 'D':
                cout << "what string would you like to delete?\n";
                cin >> element;
                if (Tree.searchNode(element)) {
                    Tree.remove(element);
                    cout << element << " successfully removed\n";
                } else {
                    cout << element << " is not in the list, so it could not be deleted\n";
                }
            break;
            case 'S':
                cout << "what string would you like to search for?\n";
                cin >> element;
                if (Tree.searchNode(element))
                    cout << element << " is in the tree!\n";
                else {
                    cout << element << " is not in the tree!\n";
                }
            break;
            case 'O':
                Tree.displayInOrder();
            break;
            default:
                "invalid choice. try again";
        }
        cout << endl << endl << MENU;
        cin >> choice;
    }

    return 0;
}