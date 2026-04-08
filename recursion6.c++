// wap for power calculation using recursion .{x ki power y}
# include <iostream>
using namespace std;
long long power(long long x,long long y,long long z){   // here long long datatype is used because sometimes for higher power the values goes boyond the int datatype limit and in result we gets wrong output thatswhy.
    if(y==0) return z;
   return power(x,y-1,z*x);
}
int main(){
    long long x;
    long long y;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    cout<<power(x,y,1);
    return 0;
}