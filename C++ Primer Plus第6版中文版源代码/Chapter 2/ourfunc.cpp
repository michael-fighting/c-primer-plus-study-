// ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    // function prototype for simon()

int main()
{
    using namespace std;
    simon(3);       // call the simon() function
    int count;
    int cheeses;
    cheeses = 32;
    cin >> cheeses;
    cout << "cheesese:" << cheeses << endl;
    cout << "We have " << cheeses << " varieties of cheese" << endl;
    cout << "Pick an integer: " << endl;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
	// cin.get();
    // cin.get();
    return 0;
}

void simon(int n)   // define the simon() function
{
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
    cout <<"Hello, world" << endl;
}                   // void functions don't need return statements

