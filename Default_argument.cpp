#include<iostream>
using namespace std;



int main(){
    int time,pri;
    float rate;
    cout<<"The interest of your amount is: "<<interest(1,10000,2);
    cout<<"\nThe interest of your amount with default argument is: "<<interest(1,10000);//Here default arguments has used
    return 0;
}

int interest(int time, int pri, float rate=1.5f){//rate is default argument
    return (pri*rate*time)/100;
}