#include<stdio.h>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Herer is the information in a single string: " << first_name << ", " << last_name;
    return 0;
    
}