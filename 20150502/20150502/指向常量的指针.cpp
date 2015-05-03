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
//	//A *const p1 = new A;
//	const A *p1 = new A;
//	//p1变成了指向常量的指针，该指针指向的目标是不可修改的，但是该指针可以被修改，该指针可以做加减等操作
//	//p1 = p1 + 1;
//	p1->set(11);
//	//指向常量的指针指向的目标不可被修改。
//	cout << p1->get();
//	return 0;
//}