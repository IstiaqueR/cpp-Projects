#include <iostream>
using namespace std;



int main()
{

    char userInput;
    cout << "Enter your option(+ - * /):";
    cin >> userInput;

    switch(userInput){

        case '+':
        {
        float a,b,sum;
        cout << "Enter your 1st number:";
        cin >> a;
        
        cout << "Enter your 2nd number:";
        cin >> b;
        sum = a+b;
        cout << endl;
        cout << "Addition is:" << sum << endl;
        break;
        }
        
        case '-':
        {
        float a,b,minus;
        cout << "Enter your 1st number:";
        cin >> a;
        
        cout << "Enter your 2nd number:";
        cin >> b;
        minus = a-b;
        cout << endl;
        cout << "Subtraction is:" << minus << endl;
        break;
        }

        case '*':
        {
        float a,b,sub;
        cout << "Enter your 1st number:";
        cin >> a;
        
        cout << "Enter your 2nd number:";
        cin >> b;
        sub = a*b;
        cout << endl;
        cout << "Multiplication is:" << sub << endl;
        break;
        }

        case '/':
        {
        float a,b,div;
        cout << "Enter your 1st number:";
        cin >> a;
        
        cout << "Enter your 2nd number:";
        cin >> b;
        if (b == 0)
        {
            cout << "Can't divide by zero";
        }
        else{
        div = a/b;
        cout << endl;
        cout << "Division is:" << div << endl;
        
            }
        break;
        }
        default:
            cout << "wrong input" << "\n";
    }

    return 0;
}