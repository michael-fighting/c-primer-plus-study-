#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    struct car
    {
        /* data */
        char producer[50];
        int year;
    };
    int num;
    cout << "How many cars do you wish to catalog ";
    cin >> num;
    car* arr = new car[num];
    for (int i = 0; i < num; i++)
    {
        /* code */
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make:";
        cin.get();
        cin.get(arr[i].producer,50);
        //cin >> arr[i].producer;
        cout << "Please enter the year made:";
        cin >> arr[i].year;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < num; i++){
        cout << arr[i].producer << arr[i].year << endl;
    }
    delete[] arr;
    return 0;
}