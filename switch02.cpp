#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    switch(age)
    {
        case 18:
            cout<<"You are 18";
            break;
        case 22:
            cout<<"You  are 22";
            break;
        case 25:
            cout<<"You are 25";
            break;
        default:
            cout<<"no special case";
    }
    return 0;
}
