#include<iostream>
using namespace std;
struct s
{
 private :
 int a=10;
 public :
 void fu()
  {
   cout<<"hello";
  }
};
int main()
{
struct s a;
cout<<a.a;
a.fu();
}

