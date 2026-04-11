// calculate the no. of ways to reach the nth stair 
int stair(int n){
    //if(n==1) return 1;
    //if(n==2) return 2;
    if(n==1||n==2) return n;
     int totalways = stair(n-1) + stair(n-2);
     return totalways ;
}
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<stair(n);
    return 0;
}