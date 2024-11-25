#include<iostream.h>
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b){
if(a>c) //checking maximum
max=a;}
else
{
if(b>c)
max=b;
else
max=c;
}
cout<<max;
}
