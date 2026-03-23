// wap to find the square of any number
# include <iostream>
using namespace std;
/*int square(int n){
    int x=n*n;
    return x;
}
int main (){
    cout<<square(12);
    return 0;
}*/

// wap to reverse a number 
int reverse(int n){
    int rev = 0;
    for(int i=-1;i<=n;i++){
        int x = n%10;
        rev = rev * 10 +x  ;
        n=n/10;
    }
    return rev;
}
int main (){
    cout<<reverse(123)<<endl;
    return 0;
}