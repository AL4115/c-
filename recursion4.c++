//Sum of n natural numbers 
# include <iostream>
using namespace std;
int naturaln(int n){
    if(n==0) return n ;
   return n + naturaln(n-1);
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<naturaln(n);
    return 0;
}
