#include<stdio.h>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    char words[50];
    int num;
    cout << "enter words(to stop, type the word Done)";
    //cin.get(words, 50);
    for (num = 0; strcmp(words,"Done") != 0; num++)
    {
        /* code */
        cin >> words;
        //cin.get();
    }
    cout << num;
    return 1;
    
}