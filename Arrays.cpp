#include<iostream>
using namespace std;

int main(){
    int a[3]={1,2,3};
    int n;
    int mathmarks[4];
    mathmarks[0]=21;
    mathmarks[1]=22;
    mathmarks[2]=23;
    mathmarks[3]=24;
    cout<<"These are marks\n";
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<"These are maths marks\n";
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    // You can change the value of an array
    mathmarks[0]=25; 
    mathmarks[1]=26;
    mathmarks[2]=27;
    mathmarks[3]=28;
    cout<<"These are changed maths marks\n";
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // Printing mathmarks by using for_loop
    for ( int i = 0; i < 4; i++)
    {
        cout<<mathmarks[i]<<endl;
    }
    
    // Printing value of a by using while_loop
    n=0;
    while (n<4)
    {
        cout<<"The value of a"<<n<<" "<<a[n]<<endl;
        n=n+1;
    }
    
    
    return 0;
}