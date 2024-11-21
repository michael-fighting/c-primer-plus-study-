#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    const int datToHour = 24;
    const int hourToMinute = 60;
    const int MinuteToSecond = 60;
    int days, hours, minutes,seconds;
    long int input;
    cout<<"Enter the number of seconds: ";
    cin>> input;
    days = input / (datToHour*hourToMinute*MinuteToSecond);
    hours = input % (datToHour*hourToMinute*MinuteToSecond) / (hourToMinute*MinuteToSecond);
    minutes = input % (datToHour*hourToMinute*MinuteToSecond) % (hourToMinute*MinuteToSecond)/MinuteToSecond;
    seconds = input % (datToHour*hourToMinute*MinuteToSecond) % (hourToMinute*MinuteToSecond)%MinuteToSecond;

    cout<< days << "days,"<< hours <<" hours," << minutes <<" minutes," << seconds <<" seconds";
}