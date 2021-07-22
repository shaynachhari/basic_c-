#include<iostream>
using namespace std;

// class is a templates or blueprint for objects
// objects are instance of class

// Here by default attribute and methods are private
// if we want to make public Attributes we have to use public access specifier
class Fruits{
    private:
        int price = 100;
    public:
        string colour;
        string name;
        string taste;
        void detail(){
            cout<<name<<" has "<<colour<<" colour and price is: "<<price<<endl;
        }
};

int main(){
    Fruits mango;
    mango.colour = "Yellow";
    mango.name = "Mango";
    mango.taste = "Sweat and Sour";
    // this will give error because it is private attribute
    // mango.price = 100;
    cout<<mango.colour<<endl;
    cout<<mango.name<<endl;
    cout<<mango.taste<<endl;
    // cout<<mango.price<<endl;
    mango.detail();
    return 0;
}
