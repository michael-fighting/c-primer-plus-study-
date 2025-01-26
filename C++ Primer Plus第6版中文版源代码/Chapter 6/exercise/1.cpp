#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char c;
    while (cin.get(c) && c != '@')
    {
        /* code */
        if (islower(static_cast<unsigned char> (c))){
            c = toupper(static_cast<unsigned char> (c));
        }
        cout << c;
    }
    return 0;

}