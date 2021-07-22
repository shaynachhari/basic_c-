#include <iostream>
using namespace std;

void Swap(int a , int b){
    
    int z = a;
        a=b;
        b=z;

}
void Swap_pointer( int *a, int* b){
    int z = *a;
       * a = *b;
       * b = z;


}
void Swap_reference(int &a , int &b){
    int z = a;
        a = b;
        b = z;
}

int main(){
    int x =4;
    int y =3;

    cout<<"The Swap value of x : "<<x<<"\n "<<"The Number of y : "<<y<<endl;
    Swap_pointer(&x,&y);
    cout<<"The Swap_pointer Value of x : "<<x<<" \n" <<"The Number of y : "<<y<<endl;
    Swap_reference(x,y);
    cout<<"The Swap_reference Value of x : "<<x<<"\n "<<"The Number of Y : "<<y<<endl;

    return 0;
}