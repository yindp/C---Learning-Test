//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() { cout << "构造函数执行完毕！" << endl;}
//	void set(int m, char n)
//	{
//		x = m;
//		y = n;
//	}
//	void print()
//	{
//		cout << x << ":" << y << endl;
//	}
//private:
//	int x;
//	char y;
//};
//int main()
//{
//	A *a;
//	a = new A;
//	//申请堆中的空间。
//	//栈由系统自动分配内存，堆要程序员进行申请。
//	//栈中空间比较小，只有2M，堆的上限是由系统中有效的虚拟内存来定的。因此获得的空间比较大。
//	a->set(3, '4');
//	a->print();
//	return 0;
//}