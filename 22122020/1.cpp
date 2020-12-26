#include<iostream>
using namespace std;
int m1(int x, int y)
{
 int temp=x;
 x=y;
 y=temp;
 cout<<x<<y;

}
int main()
{
 int a=10,int b=20
 cout<<a<<endl<<b<<endl;
 m1(a,b);
 cout<<a<<b;

}
