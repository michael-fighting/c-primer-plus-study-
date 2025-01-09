#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int num[12];
    string month[12] = {"一","二","三","四","五","六","七","八","九","十","十一","十二"};
    int i;
    int sum = 0;
    for ( i = 0; i < 12; i++)
    {
        /* code */
        cout << "请输入" <<month[i] <<"月销售数量";
        cin >> num[i];
        sum += num[i];
    }
    cout << "全年的销售总量为" << sum;
    return 0;

    
}