#include<iostream>

using namespace std;

int main(){
    enum Meal { breakfast, lunch, dinner, snake, monkey, lion};
    // instances of enum get values from zero
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal a = breakfast;
    cout<<a<<endl;
    // we can not update enum variable
    Meal b = dinner;
    cout<<b<<endl;
    Meal c = monkey;
    cout<<c<<endl;
    return 0;
}