#include<iostream.h>
using namespace std;

int main(){
char ch=cin.get();
if(ch>='a'&&ch<='z')
    cout<<"Lower alphabet "<<ch,,endl;
else if(ch>='A'&&ch<='Z')
    cout<<"Upper alphabet "<<ch<<endl;
else if(ch>='0'&&ch<='9')
    cout<<"Number "<<ch<<endl;
}
