#include<iostream>
using namespace std;
class A
{
 public:
  int a;
  int b;
 public:

  void m1();
};
void A::m1()
{
cout<<"hello";
}
int main()
{
 A o;
 o.m1();
 //cout<<o.a;
}
