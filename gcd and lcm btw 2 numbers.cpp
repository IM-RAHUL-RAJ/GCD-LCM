#include<iostream>
#include<math.h>
int main()
{
	int x,y;
  std::cout<<"Enter the first number: ";
  std::cin>>x;
  std::cout<<"Enter the 2nd number: ";
  std::cin>>y;
  int a,b,rem;
  
  a=x;
  b=y;
  while(b!=0){
  	rem=a%b;
  	a=b;
  	b=rem;
  }
  int gcd,lcm;
  
  gcd=a;
  lcm=(x*y)/gcd;
  std::cout<<gcd<<"\n";
  std::cout<<lcm;
  return 0;
}
