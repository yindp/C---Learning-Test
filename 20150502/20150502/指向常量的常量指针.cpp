#include <iostream>
using namespace std;
class A
{
public:
	int get()const
	{
		return i;
	}
	void set(int x)
	{
		i = x;
	}
private:
	int i;

};
int main()
{
	//int a = 3;
	////����ָ�������ֵ�ǲ��ɸı�ģ�������ָ���Ŀ���ֵȴ�ǿ��Ըı�ġ�
	//int *const p = &a;
	//cout << "a:" << a << endl;
	//a = 4;
	//cout << "a:" << a << endl;
	A *p = new A;
	cout << "p:" << p << endl;
	p = p + 1;
	cout << "p:" << p << endl;
	const A *const p1 = new A;
	//ָ�����ĳ���ָ�룬ָ���ָ��ָ��Ķ��󶼲����Ա��޸ġ�
	//p1 = p1 + 1;
	p1->set(11);
	cout << p1->get();
	return 0;
}