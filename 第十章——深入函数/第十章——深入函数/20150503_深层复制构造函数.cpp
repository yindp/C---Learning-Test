//为了解决浅层复制导致的迷途指针问题，我们必须创建自己的赋值构造函数，并且在函数例为我们的成员变量分配内存，这样，在分配完内存后，旧对象的成员变量旧可以赋值到新的内存区域中，两个对象的成员变量都各自拥有自己的内存区域，一个对象在析构后不会再影响到另一个，我们把这种复制方式叫做深层复制。
//用已有对象来创建新对象时调用复制构造函数。
#include <iostream>
using namespace std;
class A
{
public:
	A() { x = new  int; *x = 5; }
	~A() { delete x; x = 0; }
	A(const A&a)
	{
		cout << "复制构造函数执行...\n" << endl;
		x = new int;
		*x = *(a.x);
	}
	int print()const { return *x; }
	void set(int i) { *x = i; }
private:
	int *x;
};
int main()
{
	A*a = new A();
	cout << "a:"<<a->print()<< endl;
	A b = (*a);
	cout << "a:" << a->print() << endl;
	cout << "b:" << b.print() << endl;
	a->set(32);
	cout << "a:" << a->print() << endl;
	delete a;
	cout << "b:" << b.print() << endl;
	return 0;
}