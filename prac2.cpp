//Your C++ Proram will come here//
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int a,c,b=0;
  cout<<"Enter two digit number: ";
  cin>>a;
  while(a!=0)
  {
    c = a % 10;
    a = a/10;
    b = c + (b*10);
  }
cout<<b;
return 0;   
}
