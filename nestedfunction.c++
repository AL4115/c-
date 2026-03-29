# include <iostream>
using namespace std;
void india (){
    cout << "i love my india"<<endl;
    return ;
}
void usa (){
    cout<<"usa is a country"<<endl;
    india();
    return ;
}
void canada (){
    cout <<"canada is a country"<<endl;
    usa();
    return ;
}
void russia (){
    cout<<"russia is a best friend of india"<<endl;
    canada();
    return ;
}
int main (){
    russia();
    return 0;
}