#include<iostream>
#include<stdio.h>
using namespace std;
struct box{
    char maker[40];
    float height;
    float weidth;
    float length;
    float volume;
};

void show(box temp);
void calVolu(box *temp);



int main(){
    box a ={
        "abcdef",
        20,
        10,
        30,
        40
    };
    
    show(a);
    box b ={
        "aabcdef",
        200,
        100,
        300,
        400
    };
    calVolu(&b);
    cout << b.volume << endl;
    return 0;
}

void show(box temp){
    cout << temp.maker << endl;
    cout << temp.height << endl;
    cout << temp.length << endl;
    cout << temp.volume << endl;
    cout << temp.weidth << endl;
    return;

}

void calVolu(box *temp){
    temp->volume = temp->height * temp->length * temp->weidth;
    return ;

}