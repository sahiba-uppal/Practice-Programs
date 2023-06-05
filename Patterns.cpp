#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1; j<=n-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=1;k++){
        cout<<"*";
    }
    for(int l=0;l<=2*i-2;l++){
        cout<<" ";
    }
    for(int m=1;m<=1;m++){
        cout<<"*";
    }
    cout<<endl;
}
for(int a=1;a<=n/2;a++){
    for(int b=1;b<=2*n+1;b++){
        if(a==1||b==1||b==2*n+1)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
}

}
