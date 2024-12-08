#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;
int main(){
    struct info
    {
        /* data */
        char first_name[20];
        char last_name[20];
        string grade;
        int age;
    }; 
    info pt;
    string str = "abc";
    cout << "What is your first name？ ";
    cin.getline(pt.first_name, 20);
    cout << "What is your last name？ ";
    cin.getline(pt.last_name,20);
    cout << "what is your letter grade? ";
    cin >> pt.grade;
    cout << "what is your age ";
    cin >> pt.age;
    cout << "Name: " << pt.first_name << "," << pt.last_name << endl;
    cout << "Grade: " << pt.grade << endl;
    cout << "Age: " << pt.age << endl;
    return 0;
    
}