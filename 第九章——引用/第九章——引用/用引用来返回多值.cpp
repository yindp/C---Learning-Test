//#include <iostream>
//using namespace std;
//int func(int a, int &b, int &c);
//int main()
//{
//	/*int a = 1, b = 2, c = 3;
//	cout << "主程序，调用func函数前...\n";
//	cout << "a:" << a << endl << "b:" << b << endl << "c:" << c << endl;
//	func(a, &b, &c);
//	cout << "主程序，调用func函数后...\n";
//	cout << "a:" << a << endl << "b:" << b << endl << "c:" << c << endl;*/
//
//	int a, b, c;
//	int check;
//	cout << "请输入要进行运算的数字,";
//	cout << "您输入的数字将作为圆的半径和正方形的边长；" << endl;
//	cin >> a;
//	check = func(a, b, c);
//	if (check)
//	{
//		cout << "输入的数字超出计算范围！\n";
//	}
//	else
//	{
//		cout << "圆的面积为：" << b << endl;
//		cout << "正方形的面积为：" << c << endl;
//	}
//	return 0;
//}
//int func(int a, int &b, int &c)
//{
//	/*cout << "func函数中，计算前...\n";
//	cout << "a:" << a << endl<< "b:" << *b << endl << "c:" << *c << endl;
//	a = a + 1;
//	*b = (*b)*(*b);
//	*c = (*c)*(*c)*(*c);
//	cout << "func函数中，计算后...\n";
//	cout << "a:" << a << endl << "b:" << *b << endl << "c:" << *c << endl;
//	return a;*/
//
//	if (a > 20000)
//	{
//		a = 1;
//	}
//	else
//	{
//		b = a*a*3.14;
//		c = a*a;
//		a = 0;
//	}
//	return a;
//}