#include<iostream>
using namespace std;
int main(){

    int num,rem,ans=0,mul=1;
    cout<<"Enter the decimal no.";
    cin>>num;
    while(num>0)
    {
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul=num*2;
     }
     cout<<ans;
}