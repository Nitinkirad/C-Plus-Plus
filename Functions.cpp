#include<iostream>
using namespace std;


// sum,mul,print string
// int sum(int x, int y)  //function declaration
// {
//    int ans=x+y;  //Function define
//    return ans;
// }

// int mul(int x, int y)
// {
//     int ans=x*y;
//     return ans;
// }

// void fun()
// {
//     cout<<"Hello nitin";
// }

// int main()
// {
//     int a,b;
//     cout<<"Enter the numbers:";
//     cin>>a>>b;

//     cout<<sum(a,b)<<endl;;
//     cout<<mul(a,b)<<endl;
//     fun();
// }

bool prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
    
    if(n%i==0)
    {
        return 0;
    }    
    }
    return 1;
}

int fact(int m)
{
    int ans=1;
    for(int i=1;i<=m;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;

    // A is prime or not 
       cout<<prime(a)<<endl;


    // A ka factorial
     cout<<fact(a)<<endl;
   
    // B is prime or not
       cout<<prime(b)<<endl;

    // B ka factorial
       cout<<fact(b)<<endl;

    // B-A is prime or not
       cout<<prime(b-a)<<endl;

    // B-A ka factorial
       cout<<fact(b-a)<<endl;
}