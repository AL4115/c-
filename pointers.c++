# include <iostream>
using namespace std;
int main (){
    int x=3;
    int* p=&x;
    cout<<x<<endl;  // access the value of x;
    cout<<p<<endl;// stores the address of x;
    cout<<*p<<endl;// access the value of x;
    cout<<&p<<endl; // access the address of p;
    *p=24;  // udating the value of x using pointer 
    cout<<x<<endl; 
    return 0;
}