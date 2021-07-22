#include<iostream>
using namespace std;

int main(){
    int age = 25;
    // if (age == 25){
    //     cout<<"You are of twentyfive\n";
    // }
    // else{
    //     cout<<"You are not of twentyfive\n";
    // }
    // variable = (condition) ? if_exrpression : else_expression;
    string result = (age == 25) ? "You are of twentyfive\n" : "You are not of twentyfive\n";
    cout<<result;
    return 0;
}