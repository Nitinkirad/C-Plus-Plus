#include<iostream>
using namespace std;
int main()
{
    // int i=0;
    // for(i=1;i<=10;i++)
    // {
    //     cout<<i*i*i<<endl;
    // }

    // //  print all even numbers between 2 to 10
    //  cout << " Enter your no: " << endl;
    // int n;
    //  cin >> n;
    // for(int i=2;i<=n;i=i+2)
    // {
    //     cout<<i<<endl;
    // }

    // print all odd numbers between 1 to n
    //  cout << " Enter your no: " << endl;
    // int n;
    //  cin >> n;
    // for(int i=1;i<=n;i=i+2)
    // {
    //     cout<<i<<endl;
    // }


    // print both even and odd numbers between 1 to n

    int n;
    cout << " Enter your no: " << endl;
    cin >> n;
    for (int i = 1 ; i <= n ; i=i+1)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        
    }
}