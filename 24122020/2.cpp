#include<iostream>
using namespace std;
class A
{
 public:
  int a;
  int b;
 public:
  void m1(int x,int y)
 {
   a=x;
   b=y;
 }
 void m1();
};
int main()
{
 A o;
 o.m1(10,20);
 //cout<<o.a;
}

