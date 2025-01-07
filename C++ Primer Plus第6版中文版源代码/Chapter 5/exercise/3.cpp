#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int num;
    int sum;
    cin >> num;
    // cin.get(num);
    while (num != 0){
        sum += num;
        cout << "所有输入的累计和为" << sum <<endl;
        cin >> num;
        // cin.get(num);
    }
    return 1;
}