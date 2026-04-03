// wap to print sum from 1 to n(parameterised)
# include <iostream>
using namespace std;
int sum(int n,int s){
    if(n==0) {
        cout<<s<<endl;
        return s ;
    }
    sum(n-1,s+n);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    sum(n,0);
    return 0;
}