#include<iostream>

using namespace std;

int main(){
    const int ychiToYcun = 12;
    const float ycunToMi = 0.0254;
    const float kgToBang = 2.2;
    int ychi,ycun,bang;
    float bmi;
    cout<<"请输入身高，以英尺和英寸为单位"<<endl;
    cout<< "英尺为"<<endl;
    cin>> ychi;
    cout<<"英寸为"<<endl;
    cin>> ycun;
    cout<<"请输入体重，以磅为单位"<<endl;
    cin>>bang;
    bmi = (bang/kgToBang)/((ychiToYcun*ychi+ycun)*ycunToMi);
    cout<<"bmi指数为"<<bmi<<endl;
    return 1;
}