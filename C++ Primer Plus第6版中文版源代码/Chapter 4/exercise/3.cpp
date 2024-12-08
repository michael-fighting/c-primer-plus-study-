#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    char first_name[20];
    char last_name[20];
    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    cin.getline(last_name,20);
    cout << "Herer is the information in a single string: " << first_name << ", " << last_name;
    return 0;
    
}