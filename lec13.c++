// wap to print multiplication table of a given number 
# include <iostream>
using namespace std;
/*int table(int n){
    int x;
    for(int i=1;i<=10;i++){
         x = n*i;
    cout<<x<<endl;
    }
    return x;
}
int main(){
    table(11);
    return 0;
}*/

// wap to find HCF of two numbers 
int HCF(int x,int y){
    for(int i=1;i<=x;i++){
        if(x/i)
       x= x/i;
    
    cout<<x<<endl;}
    for(int j=1;j<=y;j++){
        y=y/j;
    }
    cout<<y<<endl;
    return x,y;
}
int main(){
    HCF(24,36);
    return 0;
}