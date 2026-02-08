#include <iostream>
using namespace std;
int main()
{

    // Print the below pattern
    // * * * * * 
    // * * * * * 
    // * * * * * 
    // * * * * * 
    // * * * * * 

    // int j,i;
    // for(j=1;j<=5;j++)
    // {
    //     for(i=1;i<=5;i++)
    //     {
    //         cout<<"*"<<" ";
    //     }

    //     cout<<endl;
    // }

 
    // Print the below pattern 
    // *  *  *  *  *  
    // *  *  *  *  *  
    // *  *  *  *  *  
    // *  *  *  *  *  
    // *  *  *  *  *  
    // int row,col;

    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=5;col++)
    //     {
    //         cout<<"*"<<"  ";
    //     }

    //     cout<<endl;
    // }

// Print the below pattern 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 


    //  int row,col;
     

    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=5;col++)
    //     {
    //         cout<<"10 ";
    //     }

    //     cout<<endl;
    // }


// Print the below pattern 
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5     
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
        
//         for(col=1;col<=5;col++)
//         {
//             cout<<row<<" ";
//         }

//         cout<<endl;
//     } 

// Print the below pattern 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
//     int row,col;
//     for(row=5;row>0;row--)
//     {
        
//         for(col=5;col>0;col--)
//         {
//             cout<<col<<" ";
//         }

//         cout<<endl;
//     } 


// Print the below pattern 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25
    
// int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5;col++)
//         {
//             cout<<col*col<<" ";
//         }

//         cout<<endl;
//     }

    // Print the below pattern
// aaaaa
// bbbbb
// ccccc
// ddddd
// eeeee

    // int row,col;
    // char name;
    // for(row=1;row<=5;row++)
    // {
    //     name='a'+ (row-1);

    //     for(col=1;col<=5;col++)
    //     {
    //         cout<<name;
    //     }

    //     cout<<endl;

    // }
    

// print the below pattern
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e

    // int row ;
    // char col;
    // for(row=1;row<=5;row++)
    // {
    //     for(char col='a';col<='e';col++)
    //     {


    //         cout<<col<<" ";
    //     }

    //     cout<<endl;
    // }
    

    //   print the below pattern
    //   1 2 3 4 5 
    //   6 7 8 9 10 
    //   11 12 13 14 15 
    //   16 17 18 19 20 
    //   21 22 23 24 25
    
    // int row,col;
    // int count = 1;

    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=5;col++)
    //     {
    //         cout<<count<<" ";
    //         count=count+1;
            
    //     }

    //     cout<<endl;
    // }

// Print the below pattern
// * 
// * * 
// * * * 
// * * * * 
// * * * * *    

    // int row,col;
    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<"*"<<" ";
    //     }

    //     cout<<endl;
    // }


// Print below pattern
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5     
    // int row,col;
    // for(row=1;row<=5;row++)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<row<<" ";
    //     }

    //     cout<<endl;
    // }
    
// Print the below pattern 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
// int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=row;col++)
//         {
//             cout<<col<<" ";
//         }

//         cout<<endl;
//     }   

// Print the below code
//    1 
//    2 1 
//    3 2 1 
//    4 3 2 1 
//    5 4 3 2 1 


//   int row,col;
//     for(row=1;row<=5;row++)
//   {
//     for(col=row;col>=1;col--)
//     {
//       cout<<col<<" ";
//     }
//     cout<<endl;
//   }
  

// Print the below table
//   a 
//   b b 
//   c c c 
//   d d d d 
//   e e e e e 

//   char name;
// int row, col;

// for (name = 'a', row = 1; name <= 'e'; name++, row++)
// {
//     for (col = 1; col <= row; col++)
//     {
//         cout << name <<" ";
//     }
//     cout << endl;
// }

  


   //  Print the below table
    //    a 
    //    b a 
    //    c b a 
    //    d c b a 
    //    e d c b a 
//   int row,col;
//   char name = 'a';
//   for(row=1;row<=5;row++)
//   {
    
//     for(col=row;col>=1;col--)
//     {
//       char name='a'+(col-1);
//       cout<<name<<' ';
//     }
//     cout<<endl;
//   }


  
  //  Print the below table
    //   a 
    //   b b 
    //   c c c 
    //   d d d d 
    //   e e e e e 
//   int row,col;
//   char name = 'a';
//   for(row=1;row<=5;row++)
//   {
    
//     for(col=row;col>=1;col--)
//     {
//       char name='a'+(row-1);
//       cout<<name<<' ';
//     }
//     cout<<endl;
//   }
  
 
//  Print the below table
//   * * * * * 
//   * * * * * 
//   * * * * * 
//   * * * * * 
//   * * * * *
//   int row,col;
  
//   for(row=5;row>=1;row=row-1)
//   {
//     for(col=1;col<=5;col++)
//     {
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }



  
// Print the below code
//   1 2 3 4 5 
//   1 2 3 4 
//   1 2 3 
//   1 2 
//   1 
//     int row,col;
  
//   for(row=5;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
        
//       cout<<col<<" ";
//     }
//     cout<<endl;
//   }
      
    // Print the below pattern 
//     * * * * * 
//     * * * * 
//     * * * 
//     * * 
//     *   
//           int row,col;
  
//   for(row=5;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
        
//       cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }


// Print the below pattern 
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5

//      int row,col;
  
//   for(row=1;row<=5;row++)
//   {
//       for(col=5;col>=row;col--)
//       {
//           cout<<col<<" ";
//       }
  
//       cout<<endl;
//   }      

  
  
  

}