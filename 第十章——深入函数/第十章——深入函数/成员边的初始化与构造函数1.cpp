//#include <iostream>
//using namespace std;
//class demo
//{
//public:
//	demo() { x = 0; cout << "demo��Ĭ�Ϲ��캯����" << x << endl;}
//	demo(int i) { x = i; cout << "demo�Ĵ�һ�������Ĺ��캯����" << x << endl; }
//	~demo() { cout << "demo��Ĭ����������" << x << endl; }
//	int get() { return x; }
//	void set(int i) { x = i; }
//private:
//	int x;
//};
//class rectangle
//{
//public:
//	rectangle() { x = 1000; cout << "rectangle��Ĭ�Ϲ��캯����" << x << endl; }
//	rectangle(int i, int j, int k) :x(i), width(j), length(k)
//	{
//		cout << "rectangle�Ĵ����������Ĺ��캯����" << "������b�����Ϊ��" << length.get()*width.get() << endl;
//	}
//	~rectangle() { cout << "rectangle��Ĭ������������" << x << endl; }
//	int area() { return length.get()*width.get(); }
//private:
//	//���캯���ĳ�ʼ��˳���ǳ�Ա�б��˳����ġ�
//	//����˳���빹��˳���෴��
//	int x;
//	demo length;
//	demo width;
//};
//int main()
//{
//	rectangle a(100, 200, 300);
//	return 0;
//}
