// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>        // declare strlen(), strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";     //animal holds bear
    const char * bird = "wren";   // bird holds address of string
    char * ps;                    //uninitialized

    cout << animal  << " and ";  // display bear
    cout << bird    << "\n";     // display wren

    //cout << ps << "\n";        //may display garbage, maybe cause a crash

    cout << "Enter a kind of animal: ";
    cin >> animal;               // ok if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn;t
    //            point to allocated space

    ps = animal;                 // set ps to point to string
    cout << ps << "!\n";         // set ps to point to string
    cout << "Before using strcpy(): \n";
    cout << animal << " at "  << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1] ;    //get new storage
    strcpy(ps, animal);              // copy string to new storage
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}