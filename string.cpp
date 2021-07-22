#include<iostream>
#include<string>
using namespace std;

int main(){
    string fname = "Shayna ";
    string lname = "Chhari";

    // string fullname = fname + " " + lname;
    // combining two strings together by + operator is called string concatenation
    string fullname = fname.append(lname);
    cout<<fullname<<endl;

    string x = "6";
    string y = "9";
    cout<<x + y<<endl;

    // length method returns length of string
    cout<<fullname.length()<<endl;

    // size method returns length of string (same as length method)
    cout<<fullname.size()<<endl;

    string world = "Shayna";
    cout<<world[0]<<endl;
    world[0] = 's';
    cout<<world[0]<<endl;
    // at method returns character of the index no. which is provided into agr. or we can change that charachter too.
    world.at(3) = 'Y';
    cout<<world.at(3)<<endl;
    cout<<world<<endl;

    // input
    string love;
    // cin has a limitation that it will not read input after space
    // cin>>love;
    // cout<<love<<endl;
    // getline will read whole input
    getline(cin, love);
    cout<<love<<endl;
    return 0;
}
