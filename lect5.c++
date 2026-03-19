// calculate the sum of numbers from one to N
# include <iostream>
using namespace std;
int sum(int N){
    int s = 0;
    for (int i=0;i<=N;i++){
    s+=i;
    }
    return s;
}
int main (){
    cout<<sum(78)<<endl;
    return 0;
}
