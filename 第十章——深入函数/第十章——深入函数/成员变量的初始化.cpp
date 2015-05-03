////由于常量和引用只能被初始化，不能被赋值。
////所以最好在构造函数的函数头中对常量和引用进行初始化。
//#include <iostream>
//using namespace std;
//class rectangle
//{
//public:
//
//	rectangle():length(3),width(4)
//	{
//		cout << "长方形的面积为：" << length*width << endl; 
//	}
//	int area() { return length*width; }
//private:
//	int length;
//	int width;
//
//};
//int main()
//{
//	rectangle a;
//	return 0;
//}