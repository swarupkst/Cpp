#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c=0,n,i;
cout<<"Inter the number ";
cin>>n;
for(i=1;i<=n;++i){
if(i==1){
    cout<<a<<", ";
}
if(i==2){
    cout<<b<<", ";
}

    c=a+b;
   a=b;
   b=c;
   cout<<c<<" ,";
}
}
