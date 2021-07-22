#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    // if else and switch case are control stuctures
    // if, else if, else are statement
    if(age<18){
        cout<<"You are not eligiable to come in my party";
    }
    else if(age==18){
        cout<<"You shoud bring the party pass";
    }
    else{
        cout<<"You can come to the party and enjoy";
    }

    return 0;
}