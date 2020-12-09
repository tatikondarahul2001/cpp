#include<iostream>
using namespace std;
union s
{
 int aa=10;
 void fu()
  {
   cout<<"hello";
  }
};
int main()
{
struct s a;
a.fu();
}

