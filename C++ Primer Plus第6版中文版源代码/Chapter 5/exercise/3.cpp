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
        cout << "����������ۼƺ�Ϊ" << sum <<endl;
        cin >> num;
        // cin.get(num);
    }
    return 1;
}