// wap to print the natural numbers from n to 1.
# include <iostream>
using namespace std;
/*int print(int n){
    if(n==1) return n;
    cout<<n<<" " ;
     print(n-1);
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<print(n);
    return 0;
}*/

// wap to print the natural no. from 1 to n.
/*int print(int n,int m){
    if(m==n) return m;
   cout<<m<<" ";
    print(n,m+1);
}

int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<print(n,1);
    return 0;
}*/
// wap to print the sum of natural number using recursion .
/*int sum(int n,int m){
    if(n==0) return m;
    return sum(n-1,m+n);
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<sum(n,0);
    return 0;
}*/
// wap to print the even numbers from 1 to n.
/*int print(int n,int m){
    if(m%2==!0 || n<=0 || m>=n-1) return m;
    cout<<m<<" ";
    return print(n,m+2);
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<print(n,0);
    return 0;
}*/
// wap to print the even numbers from n to 1.
int print(int n){
    if(m%2==!0 || n<=0) return n;
    cout<<n<<" ";
    print(n-2);
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<print(n);
    return 0;
}

