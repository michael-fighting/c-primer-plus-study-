// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks, unsigned head);
int main()
{
    using namespace std;
    int total, choices, head;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> total >> choices >> head ) && choices <= total && head < total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, head);      // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks, unsigned head)
{
    long double result = 1.0;  // here come some local variables
    long int n;
    unsigned p;

    for (n = 1, p = numbers; n <= picks; n++, p--)
        result = result * n / p ;
    result = result / head; 
    return result;
}
