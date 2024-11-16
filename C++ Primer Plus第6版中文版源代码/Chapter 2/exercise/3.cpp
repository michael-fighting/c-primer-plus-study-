#include<iostream>

using namespace std;
void run();
void blind();

int main(){
    blind();
    blind();
    run();
    run();
}

void blind(){
    cout << "Three blind mice" << endl;
}

void run(){
    cout << "See how they run" << endl;
}