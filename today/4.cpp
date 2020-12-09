#include<iostream>
using namespace std;
struct Person
{
	int citizenship;
	int age;
};
int main(void) {
	struct Person p;
	p.citizenship =5 ;
	p.age = 27,1,3,2,5;
	cout << "Person citizenship: " << p.citizenship << endl;
	cout << "Person age: " << p.age << endl;

	return 0;
}
