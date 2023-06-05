#include<iostream>
#include<math.h>
using namespace std;

int hexatodeci(string n){
int s=n.size();
int ans=0, x=1;
for(int i=s-1;i>=0;i--){
    if(n[i]>='0' && n[i]<='9'){
        ans=ans+x*(n[i]-'0');
    }
    else{
        ans=ans+x*(n[i]-'A'+10);
    }
    x=x*16;
}
return ans;
}

int main(){
string n;
int dec;
cout<<"Enter hexadecimal number: ";
cin>>n;

dec=hexatodeci(n);

cout<<"Decimal equivalent is "<<dec<<endl;
return 0;
}


