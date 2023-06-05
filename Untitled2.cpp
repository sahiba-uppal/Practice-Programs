#include <iostream>
using namespace std;

template<class U, class V>
class Room{
private:
    U somethin;
    V anythin;
public:
    Room(U x,V y){
    somethin=x;
    anythin=y;}

    void func(){
    cout<<"Here is"<<somethin;
    cout<<"And here"<<anythin;}
};

int main(){
Room <int, string> R1 (4,"HELLO");
R1.func();
}
