#include <iostream>
#include <math.h>
using namespace std;

int AP(int num){
int ans=7+(num-1)*3;
return ans;
}

int main(){
int n;
cin>>n;
cout<<AP(n);
}
