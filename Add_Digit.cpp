#include<stdio.h>
#include<iostream> 
using namespace std;
int main()
{
   int n, sum = 0, remainder;
   cout<<"Enter an integer\n";
   cin>>n;
    
   while(n != 0)
   {
      remainder = n % 10;
      if(n<=-10)
      	remainder=-remainder;
	  cout<<"The Remainder is "<<remainder<<"\n";//printing remainder
      sum = sum + remainder;
	  cout<<"The Sum is "<<sum<<"\n";//printing sum
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";//printing n
   }
   cout<<"Sum of digits of entered number = "<<sum<<"\n";
   return 0;
}
