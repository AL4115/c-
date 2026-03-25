// wap to check the number is palindrome or not.
# include <iostream>
using namespace std;
int palindrome (int n){
    int originalnum = n;
    int reverse=0;
    while(n>0){
        int x = n%10;
        reverse = reverse * 10 + x;
        n = n/10;
    }
        if(originalnum==reverse){
            cout<<"number n is palindrome";
        }
        else{
            cout<<"number n is not a palindrome";
        }
    return n;
}
int main(){
    palindrome(242);
    return 0;
}