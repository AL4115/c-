// swap the values of two numbers by using pointers 
# include <iostream>
using namespace std;
/*int main(){
    int x=10;   // method 1
    int y=20;
    int* p1=&x;
    int* p2=&y;
    cout<<p1<<endl;
    cout<<p2<<endl;
    *p1=20;
    *p2=10;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}*/
int swap(int* p1,int* p2){       // method 2
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    //cout<<*p1<<endl;
    //cout<<*p2<<endl;
}
int main(){
    int x=10;
    int y=100;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}