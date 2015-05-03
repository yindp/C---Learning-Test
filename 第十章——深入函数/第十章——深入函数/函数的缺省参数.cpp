///*1:重载函数使用方便，易于理解。
//默认参数的函数如不加标注的话很容易被忽略，
//而且容易被又参数的同名函数覆盖。
//2：具有默认参数的函数重载的是参数的数值，
//而重载函数重载的是参数的类型。*/
//
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void set(int = 30, int = 5);
//	void coount(bool = false);
//private:
//	int i;
//	int j;
//};
//void A::set(int x, int y)
//{
//	i = x;
//	j = y;
//}
//void A::coount(bool val)
//{
//	if (val == true)
//	{
//		cout << "val为真时：" << i*j << endl;
//	}
//	else
//	{
//		cout << "val为假时：" << i*j / 2 << endl;
//	}
//}
//int main()
//{
//	A a;
//	a.set();
//	a.coount();
//	a.coount(true);
//	return 0;
//}