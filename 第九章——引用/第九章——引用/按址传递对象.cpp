////用按址返回对象解决按值返回对象系统开销大的问题。
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() { cout << "执行构造函数创建一个对象\n"; }
//	A(A&) { cout << "执行复制构造函数穿件该对象的副本\n"; }
//	~A() { cout << "执行析构函数删除该对象\n"; }
//};
//A* func(A *one)
//{
//	return one;
//}
//int main()
//{
//	A a;
//	func(&a);
//	return 0;
//}