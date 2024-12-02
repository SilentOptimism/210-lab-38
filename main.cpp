#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

void delete(){}
void add(){}

int main() {
    ifstream fin;
    fin.open("codes.txt");

    if(!fin){
        cout << "File open failure" << endl;
        return 0;
    }

    IntBinaryTree tree;

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
        switch (input)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        default:
            break;
        }
    }
    
        

    return 0;
}