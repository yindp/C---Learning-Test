//Ϊ�˽��ǳ�㸴�Ƶ��µ���;ָ�����⣬���Ǳ��봴���Լ��ĸ�ֵ���캯���������ں�����Ϊ���ǵĳ�Ա���������ڴ棬�������ڷ������ڴ�󣬾ɶ���ĳ�Ա�����ɿ��Ը�ֵ���µ��ڴ������У���������ĳ�Ա����������ӵ���Լ����ڴ�����һ�������������󲻻���Ӱ�쵽��һ�������ǰ����ָ��Ʒ�ʽ������㸴�ơ�
//�����ж����������¶���ʱ���ø��ƹ��캯����
#include <iostream>
using namespace std;
class A
{
public:
	A() { x = new  int; *x = 5; }
	~A() { delete x; x = 0; }
	A(const A&a)
	{
		cout << "���ƹ��캯��ִ��...\n" << endl;
		x = new int;
		*x = *(a.x);
	}
	int print()const { return *x; }
	void set(int i) { *x = i; }
private:
	int *x;
};
int main()
{
	A*a = new A();
	cout << "a:"<<a->print()<< endl;
	A b = (*a);
	cout << "a:" << a->print() << endl;
	cout << "b:" << b.print() << endl;
	a->set(32);
	cout << "a:" << a->print() << endl;
	delete a;
	cout << "b:" << b.print() << endl;
	return 0;
}