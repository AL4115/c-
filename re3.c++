// make a function which calculates 'a' raised to the power 'b'using recursion 
# include <iostream>
using namespace std;
int power(int a,int b,int p){
    if(b==0) {
        cout<<p<<endl;
        return p;
    }
    return power(a,b-1,p*a); // recursion ka result return kar rahe hai 
    //return recursion की सीढ़ी पर चढ़ते हुए result को ऊपर तक पहुँचाने का काम करता है। अगर तुम return हटा दोगे, तो answer calculate तो होगा लेकिन main function तक नहीं पहुँचेगा

}
int main(){
int a;
int b;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
power(a,b,1);
return 0;
}