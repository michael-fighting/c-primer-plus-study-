#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int vow = 0, cons = 0, oth = 0;
    cout << "Enter words(q to quit)" << endl;
    string word;
    cin >> word;
    while (word != "q"){
        if (!isalpha(word[0])){
            oth++;
        }else{
            switch (word[0])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            /* code */
            vow++;
            break;
        default:
        cons++;
            break;
        }
        }
        
        cin >> word;
    }
    cout << cons << "words beginning with cons";
    cout << oth << "words beginning with oth";
    cout << vow << "words beginning with vow";
    return 0;

}