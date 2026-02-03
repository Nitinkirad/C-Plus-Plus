#include<iostream>
using namespace std;
int main()
{
    // for(long long i=100;i<=200;i++)
    // {
    //     cout<<i<<endl;
    // }


//  printing A to Z using for loop
    // char name;
    // for(name='A';name<='Z';name++)
    // {
    //     cout<<name<<"  ";
    // }

    // Print the number in reverse order
    
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for (int i=n; i>=1; i--)
    // {
    //     cout<<i<<endl;
    // }

    // print the the number starting from 1 to 100 with gap of 3

    // for(int i=1;i<100;i=i+3)
    // {
    //     cout<<i<<endl;
    // }
    

    // Print the multiplication table of a given number n
    // int n;
    // cout << "Enter the number" << endl;
    // cin >> n;
    // for (int i = 1; i <=10; i++)
    // {
    //     cout << n << 'x' << i << '=' << n*i << endl;
    // }

    // print the number with its power

    // int n,pow,i,num;
    // cout<<"Enter your number :";
    // cin>>n;
    // cout<<"Enter the power :";
    // cin>>pow;
    
    // num =n;

    // for(i=1;i<pow;i++)
    // {
    //     num=num*n;
    // }
    //  cout << num;

    // sum of all natural numbers

    // int sum,n,i;
    // sum=0;
    
    // cout<<"Enter the number:";
    // cin>>n;
    //  for(i=1;i<=n;i++)
    //  {
    //     sum=sum+i;
    //  }
    //    cout<<sum;

    // Sum of the square numberrs

    // int n,i,sum;
    // cout<<"Enter the number:";
    // cin>>n;
    // sum=0;

    // for (i=1;i<=n;i++)
    // {
    //     sum=sum+i*i;
    // }
    // cout<<sum<<endl;


    // Factorial numbers

    // int n,i,fact;
    // cout<<"Enter your number:";
    // cin>>n;
    // fact=1;
    // for(i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }

    // cout<<fact<<endl;

    // Finding the number is prime or not 

    int n,i;
    cout<<"Enter the number:";
    cin>>n;

    if(n<2)
    {
        cout<<"this is not the prime no.:";
        return 0;
    }

    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"this is not the prime no,:";
                return 0;
            }
            
        }

        cout<<"Thsi is the prime no.:";

    }
}    