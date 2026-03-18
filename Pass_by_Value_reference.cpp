#include <iostream>
using namespace std;

// void swap(int x , int y)    // pass by value 
// {
//     int z;
//     z=x;
//     x=y;
//     y=z;

// }

// void swap(int &x, int &y)  //pass by reference
// {
//     int z;
//     z=x;
//     x=y;
//     y=z;
// }

void swap(float &x , float &y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
int main()
{
  int a,b;
  cin>>a>>b;
  swap(a,b);
  cout<<a<<" "<<b<<endl;

  float f1 = 3.1 , f2 = 4.2;
  swap(f1,f2);
  cout<<f1<<" "<<f2;
} 
