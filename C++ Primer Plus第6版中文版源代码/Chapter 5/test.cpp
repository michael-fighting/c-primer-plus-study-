#include <iostream>
int main(){
    using std:: cout;
    using std::endl;
    int x = 20;
    {
        cout << x << endl;
        int x = 100;
        cout << x << endl;
    }
    cout << x << endl;
    return 0;
}