// write a function to check a number is prime or not 
# include <iostream>
using namespace std;
int prime(int n){
    int count = 0 ;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        else{
            count;
        }
    }
    if(count>2){
        cout<<"number n is not  a prime number";
    }
    else{
        cout<<"number n is  a prime number";
    }
    return count;
}
int main(){
    cout<<prime(19)<<endl;
    return 0;
}