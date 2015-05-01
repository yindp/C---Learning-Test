//How to save the address of variable.
#include <iostream>
using namespace std;
int main()
{
	int i;
	int *p;
	p = &i;
	cout << "&i:" << &i << endl;
	cout << "p:" << p << endl;
	return 0;
}