#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        int x=(j+i)%2;
        if(x==0)
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
}
}
