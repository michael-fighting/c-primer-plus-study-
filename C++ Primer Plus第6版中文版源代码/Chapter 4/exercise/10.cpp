#include<stdio.h>
#include<array>
#include<iostream>
using namespace std;

int main(){
    double grade[3];
    cin >> *grade >> grade[1] >> grade[2];
    cout << "3次 " << (grade[0] + grade[1] + grade[2]) / 3.0 <<endl;

    return 0;


}