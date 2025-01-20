#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int nums;
    int i, j;
    cout << "请输入行数";
    cin >> nums;
    for (i = 0; i < nums; i++)
    {
        for (j = 0; j < nums - i; j++)
        {
            /* code */
            cout << ".";
        }
        while (j < nums){
            cout << "*";
            j++;
        }
        cout << endl;
        /* code */
    }
    return 1;
    
}