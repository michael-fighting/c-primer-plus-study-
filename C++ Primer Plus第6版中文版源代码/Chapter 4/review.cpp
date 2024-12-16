#include<stdio.h>
#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main(){
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];
    
    array <char, 30> actor;
    array<short, 100> betsie;
    array<float, 13> chuck;
    array<long double, 64> dipsea;
    int five[5] = {1,3,5,7,9};
    int even = five[0] + five[4];
    cout<< chuck[1]<< endl;
    char cha[12] = {'c','h','e','e','s','e','b','u','r','g','e','r'};
    char cha2[13] = "cheeseburger";
    string str = "Worldrf Salad";

    struct fish
    {
        char type[20];
        int weight;
        float changdu;
    };

    fish ini
    {
        "bianyu",
        5,
        2.6,
    };
    enum Response {
        No,
        Yes,
        Maybe,
    };
    double ted;
    double *zhizhen = &ted;
    cout<<*zhizhen<<endl;
    float treacle[10];
    float *pt = treacle;
    cout<< *pt<<endl;
    cout << *(pt+9)<<endl;

    unsigned int size;
    cout << "Enter a positive interger: ";
    cin >> size;
    int * dyn = new int[input];
    vector<int> dv(size);