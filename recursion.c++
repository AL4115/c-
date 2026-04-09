// wap to find the position of an element in an array by using recursion .
# include <iostream>
using namespace std;
int position(int arr[],int n,int pos){
    if(arr[pos]==n) return pos;
    return position(arr,n,pos+1);
}
int main (){
    int arr[5] = {1,2,3,5,8};
    int n;
    cout<<position(arr,5,0);
    return 0;
}