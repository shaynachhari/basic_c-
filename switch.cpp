#include<iostream>
using namespace std;

int main(){
    int day = 1;
    char fname = 'a';
    cout<<"Enter first character of day:";
    cin>>fname;
    // if else and switch case are control stuctures
    // switch, case, default are statements
    switch(fname){
        case 'm':
            cout<<"Monday";
            break;
        case 't':
            cout<<"Tuesday";
            break;
        default:
            cout<<"other than monday and tuesday";
    }
    return 0;
}