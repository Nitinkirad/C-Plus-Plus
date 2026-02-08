#include <iostream>
using namespace std;
int main()
{

    // Print any start till n time as this 
    //       *
    //      **
    //     ***
    //    ****
    //   *****
    // int n,row,space,col;
    // cout<<"Enter the value of n:";
    // cout<<endl;

    // cin>>n;

    // for(row=1;row<=n;row++)
    // {
    //     for(space=1;space<=n-row;space++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++)
    //     {
    //     cout<<" *";
    //     }
    //     cout<<endl;

    // }
     

//  Print any start till n time as this 
//     1
//      22
//     333
//    4444
//   55555
//  666666
// 7777777

    // int n, row ,space,col;
    
    // cout<<"Enter the value of n:";
    // cin>>n;
    

    // for(row=1;row<=n;row++)
    // {
    //     for(space=1;space<=n-row;space++)
    //     {
    //         cout<<" ";
    //     }

    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<row;
    //     }

    //    cout<<endl; 
    // }

 
    // Print any start till n time as this 
//      1
//     12
//    123
//   1234
//  12345
// 123456
    // int n, row ,space,col;
    
    // cout<<"Enter the value of n:";
    // cin>>n;
    

    // for(row=1;row<=n;row++)
    // {
    //     for(space=1;space<=n-row;space++)
    //     {
    //         cout<<" ";
    //     }

    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<col;
    //     }

    //    cout<<endl; 
    // }

       
//     // Print any start till n time as this 
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 

    int row,space;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            cout<<"  ";

        }
        for(char name='A';name<='A'+row-1;name++)
        {
            cout<<name <<" ";
            
        }
        cout<<endl;
    }
}