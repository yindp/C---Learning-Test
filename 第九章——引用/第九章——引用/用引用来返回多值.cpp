//#include <iostream>
//using namespace std;
//int func(int a, int &b, int &c);
//int main()
//{
//	/*int a = 1, b = 2, c = 3;
//	cout << "�����򣬵���func����ǰ...\n";
//	cout << "a:" << a << endl << "b:" << b << endl << "c:" << c << endl;
//	func(a, &b, &c);
//	cout << "�����򣬵���func������...\n";
//	cout << "a:" << a << endl << "b:" << b << endl << "c:" << c << endl;*/
//
//	int a, b, c;
//	int check;
//	cout << "������Ҫ�������������,";
//	cout << "����������ֽ���ΪԲ�İ뾶�������εı߳���" << endl;
//	cin >> a;
//	check = func(a, b, c);
//	if (check)
//	{
//		cout << "��������ֳ������㷶Χ��\n";
//	}
//	else
//	{
//		cout << "Բ�����Ϊ��" << b << endl;
//		cout << "�����ε����Ϊ��" << c << endl;
//	}
//	return 0;
//}
//int func(int a, int &b, int &c)
//{
//	/*cout << "func�����У�����ǰ...\n";
//	cout << "a:" << a << endl<< "b:" << *b << endl << "c:" << *c << endl;
//	a = a + 1;
//	*b = (*b)*(*b);
//	*c = (*c)*(*c)*(*c);
//	cout << "func�����У������...\n";
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