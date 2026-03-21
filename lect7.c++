// calculate the sum off digit of number 
# include <iostream>
using namespace std;
int digit(int n){
    int sum = 0;
    while(n>0){
         int lastdigit  = n%10;
         n/=10;
        sum = sum + lastdigit;
    }
        return sum ;
}
int main (){
    cout << digit(123)<<endl;
    return 0;
}