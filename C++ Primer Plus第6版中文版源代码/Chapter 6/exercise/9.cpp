#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> donors;
    vector<string> nondonors; 
    int number;
    struct Grand
    {
        /* data */
        string name;
        double cash;
    };
    cout << "请输入捐赠者数目";
    cin >> number;
    Grand* arr = new Grand[number];
    for (int i = 0; i < number; i++)
    {
        /* code */
        cout << "请输入第" << i << "个捐赠者的姓名";
        cin >> arr[i].name;
        cout << "请输入第" << i << "个捐赠者的金额";
        cin >> arr[i].cash;
    }
    while (number > 0){
        if (arr[number-1].cash > 10000){
            donors.push_back(arr[number-1].name);
        }else{
            nondonors.push_back(arr[number-1].name);
        }
        number--;
    }
    cout << "以下是重要捐赠者" << endl;
    if (donors.empty()){
        cout << "none" << endl;
    }
    for (const string& val : donors)
    {
        /* code */
        cout 
        << val << endl;
    }
    cout << "以下是非重要捐赠者" << endl;
    if (nondonors.empty()){
        cout << "none" << endl;
    }
    for (const string& val : nondonors)
    {
        /* code */
        cout << val << " "<< endl;
    }
    delete[] arr;
    return 0;
}