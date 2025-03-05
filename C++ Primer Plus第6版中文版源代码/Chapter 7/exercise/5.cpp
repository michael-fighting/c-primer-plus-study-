#include<stdio.h>
#include<iostream>
long int recursion(int number);
using namespace std;

int main(){
    int number;
    cout << "输入一个数" << endl;
    cin >> number;
    long int t = recursion(number);
    cout << t;
    return 0;

}

long int recursion(int number){
    if (number == 0){
        return 1;
    }

    return number * recursion(number-1);

}