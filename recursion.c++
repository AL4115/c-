// multiple calls.
// write a function to calculate the nth fibonacci number by using for loop.
# include <iostream>
using namespace std;
/*int fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<=n;i++){
        int s=a+b;
        cout<<s<<endl;
        a=b;
        b=s;
    }
    return n;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    fibonacci(n);
    return 0;
}*/
// write a function to calculate the nth fibonacci number by using recursion.
int fibonacci(int n){
    if(n<=2) return 1;
   return fibonacci(n-1)+fibonacci(n-2); 
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}