#include<iostream>
using namespace std;


float add(float x, float y){
    float result= x + y;
    return result;
}
float sub(float x, float y){
    float result= x - y;
    return result;
}
float multi(float x, float y){
    float result= x * y;
    return result;
}
float divide(float x, float y){
    float result= x / y;
    return result;
}
int main(){
    int a=0;
    char op;
    float num1,num2;
    cout<<"\t\t\tCalculator";
    // cout<<"press the number followed by the operation\n";
    // cout<<"For Addition Press 1 \nFor subtraction Press 2 \nFor multiplication Press 3 \nFor Division 4";
    // cout<<"\nEnter the number for operation";

    do
        {   cout<<"\nPlease Enter the operator: ";
            cin>>op;
            cout<<"Please Enter 1st Number: ";
            cin>>num1;
            cout<<"Please Enter 2nd Number: ";
            cin>>num2;
            if(op=='+'){
                cout<<"Your result is :"<<add(num1,num2);
            }
            else if(op=='-'){
                cout<<"Your result is :"<<sub(num1,num2);
            }
            else if(op=='*'){
                cout<<"Your result is :"<<multi(num1,num2);
            }
            else if(op=='/'){
                cout<<"Your result is :"<<divide(num1,num2);
            }
            else{
                cout<<"Please Enter a valid operator";
            }
            cout<<"\nDo you want to use calculator again \nFor 'Yes' press-1 \nFor 'No' press-2 \nEnter the no.: ";
            cin>>a;
        } while (a==1);
    cout<<"Thank You for Your Valuable Time ";
    
    getchar();
    return 0;
}
