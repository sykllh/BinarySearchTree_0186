#include <iostream>
using namespace std;

//membuat class node
class Node {

//memberi akses modifier serta mendeklarasi variabel dan object node
public :
    string info;
    Node* leftChild;
    Node* rightChild;


    //membuat constructor untuk class node
    Node(string i, Node* 1, Node* r) {
        //memberi nilai parameter ke variabel
        info = i;
        leftChild = 1;
        rightChild = r;
    }

};


//membuat class BinaryTree
class BinaryTree {

    //memberi akses modifier dan deklarasi object
public :
    Node* ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree() {
        ROOT = nullptr;
    }

}