#include<iostream>
using namespace std;

int main(){
    char menu;
    while(cin.get(menu)){
        switch (menu)
    {
    case 'c':
        /* code */
        cout << "carnivore" << endl;
        cout << "A maple is a tree";
        return 0;
    case 'p':
        /* code */
        cout << "pianist" << endl;
        cout << "A maple is a tree";
        return 0;
    case 't':
        /* code */
        cout << "tree" << endl;
        cout << "A maple is a tree";
        return 0;
    case 'g':
        /* code */
        cout << "game" << endl;
        cout << "A maple is a tree";
        return 0;
    default:
        cout << "Please enter a c, p, t, or g: q" << endl;
    }
    }
    return 0;
}