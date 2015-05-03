////使用按址加上const实际上是为了实现按值传递的保护机制。同时又避免了按值传递的开销。
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() { cout << "执行构造函数创建一个对象\n"; }
//	A(A&) { cout << "执行复制构造函数穿件该对象的副本\n"; }
//	~A() { cout << "执行析构函数删除该对象\n"; }
//	void set(int i) { x = i; }
//	int get()const { return x; }
//private:
//	int x;
//};
// A & func( A& one)
//{
//	return one;
//}
//int main()
//{
//	A a;
//	a.set(11);
//	A& b=func(a);
//	cout << b.get() << endl;
//	return 0;
//}