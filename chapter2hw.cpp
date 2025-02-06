//this program shows different data types int, float, char, bool, and const

#include <iostream> 
using namespace std;

int main() 
{
    int number1;
    int number2;
    char foo = 'F';
    bool evaluation = true;
    const float TAX_RATE = 0.08;
    
    cout << "please input 1st number:" << endl;
    cin >> number1;
    cout << "please input 2nd number:" << endl;
    cin >> number2;
    float result = number1/number2;
    
    cout << "the result is" << endl;
    cout << result << endl;
    cout << "the tax rate is:" << result * TAX_RATE << endl;
    
    cout <<"the character variable Foo is:" << foo << endl;
    cout <<"the boolean varible is:" << evaluation;
    
    return 0;
};