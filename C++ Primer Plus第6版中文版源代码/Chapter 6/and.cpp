// and.cpp -- using the logical AND  operator
#include <iostream>
const int ArSize = 6;
int main(){
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients)"
         << "of\n your neighbors. Program terminates "
         << "when you make\n" << ArSize << " Entries "
         << "or enter a negative value. \n";
    
    int i = 0;
    float temp;
    cout << "First value: ";

    cin >> temp;
    while (i < ArSize && temp >= 0)
}