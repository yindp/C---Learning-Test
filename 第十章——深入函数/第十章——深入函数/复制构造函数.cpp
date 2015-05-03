////复制构造函数完成两个对象成员的拷贝
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(){}
//	A(A&one) { m = one.m; n = one.n; }
//	A(int x, int y) { m = x; n = y; }
//	void print() { cout << m << ":" << n << endl; }
//private:
//	int m;
//	int n;
//};
//int main()
//{
//	A a(3, 4);
//	a.print();
//	cout << "\n";
//	A b(a);
//	b.print();
//	return 0;
//}