// wap to print the numbers from n to 0
# include <iostream>
using namespace std;
/*int print(int n){
    cout<<n<<endl;
    if (n==0) return n ;
    print(n-1);
    return 0;
}
int main (){
    print(5);
    return 0;
}*/
// wap to print numbers from 1 to n
/*int print (int x , int n){
    cout<<x<<endl;
    if(x>=n) return x;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(1,n);
    return 0;
}*/

// wap to print the numbers from 1 to n without using extra parameters 
//work after call
/*int print(int n){
    if(n==0)return n;  // base case  
    print(n-1);   //call
    cout<<n<<endl;  // work
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(n);
    return 0;
}*/
// work before call
int print(int n){
    if(n==0)return n;  // base case  
    cout<<n<<endl;  // work
    print(n-1);   //call
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(n);
    return 0;
}