#include<iostream>
using namespace std;

float sum(float x, float y){
    return x+y;
}

void hello(string name){
    cout<<"Hello "<<name;
}

void intro(){
    cout<<"\nMy name is Shayna Chhari from ambah";
}

string name(){
    return "\nMy name is Shayna Chhari from ambah";
}

int main(){
    // float num1, num2;
    // cout<<"Enter 1st no.: ";
    // cin>>num1;
    // cout<<"Enter 2nd no.: ";
    // cin>>num2;
    // cout<<"The sum of numbers is.: "<<sum(num1, num2);
    hello("Shayna");
    intro();
    cout<<name();
    return 0;
}