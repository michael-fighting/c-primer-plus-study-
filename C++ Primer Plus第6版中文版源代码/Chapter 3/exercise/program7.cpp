#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    const float paragram1 = 3.876;
    const float paragram2 = 62.14;
    double gasOnehundred;
    cout << "请输入汽车的耗油量（每100公里消耗的汽油量（升））";
    cin >> gasOnehundred;
    cout << "转换后，每加仑多少英里为" << int(paragram2/(gasOnehundred/paragram1)) << "mpg";
    return 1;

}