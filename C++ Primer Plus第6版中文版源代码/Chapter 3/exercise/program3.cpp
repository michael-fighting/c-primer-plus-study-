#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    const float convert = 60.0;
    int degrees, minutes, seconds;
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees:";
    cin>>degrees;
    cout<<"Nest, enter the minutes of arc:";
    cin>>minutes;
    cout<<"Finally, enter the second of arc:";
    cin>>seconds;
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<< degrees + (minutes/convert) + (seconds/convert/convert) << "degrees";
    return 1;

}