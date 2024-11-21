#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    const float convert = 0.0833;
    int height;
    cout<<"请输入自己的身高"<<endl;
    cin>>height;
    cout<<"转换后的身高为"<<convert* height<<"英尺"<<endl;
    return 1;
}