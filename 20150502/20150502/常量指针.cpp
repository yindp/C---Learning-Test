//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	int get()const
//	{
//		return i;
//	}
//	void set(int x)
//	{
//		i = x;
//	}
//private:
//	int i;
//
//};
//int main()
//{
//	//int a = 3;
//	////常量指针自身的值是不可改变的，但是它指向的目标的值却是可以改变的。
//	//int *const p = &a;
//	//cout << "a:" << a << endl;
//	//a = 4;
//	//cout << "a:" << a << endl;
//	A *p = new A;
//	cout << "p:" << p << endl;
//	p = p + 1;
//	cout << "p:" << p << endl;
//	A *const p1 = new A;
//	//p1 = p1 + 1;
//	p1->set(11);
//	cout << p1->get();
//	return 0;
//}