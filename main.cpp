#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

void search();
void modify();
void remove();
void add();

IntBinaryTree tree;

int main() {
    ifstream fin;
    fin.open("codes.txt");

    if(!fin){
        cout << "File open failure" << endl;
        return 0;
    }


    // Fills tree
    while (!fin){
        string value;
        getline(fin, value);
        if(!fin){tree.insertNode(value);}
    }

    int input = -1;
    while (input != 5){
        cout << "Records" << endl;
        cout << endl;
        cout << "1) Add" << endl;
        cout << "2) Delete" << endl;
        cout << "3) Search" << endl;
        cout << "4) Modify Records" << endl;
        cout << "5) exit" << endl;
        cout << endl;

        cout << "Enter menu option (1 - 5) :" << endl;
        cin >> input;

        switch (input){
        case 1:
            add();
            break;
        case 2:
            remove();
            break;
        case 3:
            search();
            break;
        case 4:
            modify();
            break;
        default:
            break;
        }
    }
    
    return 0;
}

void search(){
    string userNode;
    cout << "Find node: " << endl;
    cin >> userNode;

    if(tree.searchNode(userNode)){cout << "Node found" << endl;}
    else{cout << "Node not found" << endl;}
}

void modify(){
    tree.

}

void remove(){
    string userNode;
    cout << "Input node to be removed: " << endl;
    cin >> userNode;

    tree.remove(userNode);
}

void add(){
    string userNode;
    cout << "Input new node: " << endl;
    cin >> userNode;

    tree.insertNode(userNode);
}