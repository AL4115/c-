// wap to reach the nth stair by taking single , double,and triple steps by using recursion .
# include <iostream>
using namespace std;
int stair (int n){
    if(n==0) return 1;
    if(n<0) return 0;
    int totalways = stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main (){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<stair(n);
    return 0;
}