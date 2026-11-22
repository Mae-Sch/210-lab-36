#include <iostream>
#include "StringBinaryTree.h"
using namespace std;

int main() {
    StringBinaryTree newTree;
    newTree.insertNode("meoww");
    newTree.insertNode("kitty");
    newTree.insertNode("cats");
    newTree.displayInOrder();

    newTree.insertNode("horse!");
    newTree.insertNode("horse 2: the sequel");
    newTree.remove("meoww");
    newTree.displayPreOrder();

    return 0;
}