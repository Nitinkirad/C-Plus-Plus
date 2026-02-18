#include<iostream>
using namespace std;
int main ()
{
    // int i;
    // i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // } while(i<=10);

    // Print sum of n no.
    int n,i,sum=0;
    cout<<"Enter the number";
    cin>>n;
    i=1;
    do{
        sum=sum+i;
    
        i++;
    }while(i<=n);

    cout<<sum;

   
}