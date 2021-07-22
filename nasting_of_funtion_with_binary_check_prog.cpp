#include <iostream>
#include <string>
using namespace std;

class check
{
    string a;

public:
    void input();
    void number();
    void swap();
    void swap_num();
};
void check ::input()
{
    cout << "Please enter binary number: ";
    cin >> a;
}
void check ::number()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '1' && a.at(i) != '0')
        {
            cout << "Please enter the valid binary number" << endl;
            exit(0);
        }
    }
}
void check ::swap()
{
    number(); //this is called nasting of function which means using a fuction in another function which will run this fuction for the same object.
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '1')
        {
            a.at(i) = '0';
        }
        else
        {
            a.at(i) = '1';
        }
    }
}
void check ::swap_num()
{
    cout << "The binary number after swaping: " << a;
}
int main()
{
    check binary;
    binary.input();
    // binary.number();
    binary.swap();
    binary.swap_num();
    return 0;
}