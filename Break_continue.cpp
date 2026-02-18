#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
// 	int i,j;
// 	for(i=1;i<=10;i++)
// 	{
// 	    if(i==5)
// 	    break;
	    
// 	    cout<<i<<" "<<endl;
	    
// 	}
	
// 	for(j=1;j<=10;j++)
// 	{
// 	    if(j==6)
// 	    continue;
// 	    cout<<j<<" "<<endl;
// 	}

// switch case

int i;
cout<<"Enter the number";
cin>>i;
switch(i)
{
    case 1:
    cout<<"Monday";
    break;
    
    case 2:
    cout<<"Tuesday";
    break;
    
    case 3:
    cout<<"Wenesday";
    break;
    
    case 4:
    cout<<"Thursday";
    break;
    
    case 5:
    cout<<"Friday";
    break;
    
    case 6:
    cout<<"Saturday";
    break;
    
    case 7:
    cout<<"Sunday";
    break;
    
    default:
    cout<<"Not exist";
}

}