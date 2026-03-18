#include <iostream>
#include<cmath>
using namespace std;
int count_digit(int n)
{
    int count =0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int num, int digit )
{
   int n=num,ans=0,rem;
   while(n)
   {
    rem=n%10;
    n/=10;
    ans=ans+ pow(rem,digit);
   }
   return ans;
   if(ans==num)
   return 1;
   else
   return 0 ;
   

}
int main()
{
    int num;
    cin>>num;
    //Count digit 
    int digit = count_digit(num);
    //count num 
    cout<<Armstrong(num,digit);
}
