#include<iostream>
using namespace std;

union ic
{
    int rollno;
    char namestarts;
    int uid;
};

int main(){
    union ic nitin;
    nitin.namestarts='N';
    nitin.rollno=51;
    cout<<nitin.rollno<<endl;
    cout<<nitin.namestarts<<endl;
    nitin.uid = 2412;
    cout<<nitin.uid<<endl;
    cout<<nitin.rollno<<endl;
    cout<<nitin.namestarts<<endl;
    return 0;
}