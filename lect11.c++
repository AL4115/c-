// wap to check whether the given no. is even or odd 
# include <iostream>
using namespace std;
/*int check(int n){
    if (n%2==0){
        cout <<"n is even ";
    }
    else{
        cout<<"n is odd";
    }
    return n;
}
int main(){
    check(143);
    return 0;
}*/
// wap to check the given no. is +ive , -ive or 0
int check1(int n){
    if (n<0){
        cout<<"n is -ive";
    }
    else if(n==0){
        cout<<"n is 0";
    }
    else{
        cout<<"n is +ive";
    }
}
int main(){
    check1(0);
    return 0;
}