//���μ̳�
//����������̳�ͬһ������
//����ĳ����ͬʱ�̳�������������
//���ּ̳г�Ϊ���μ̳У�������ʯ�̳�
//���μ̳в���������
//todo  ���������඼�̳��˻�������ݣ�ͬʱ�̳���������������Ǹ���ʹ������ʱ�����������
//todo  ͬʱ�̳���������������Ǹ������ԭʼ�Ļ�������ݼ̳������ݣ�������ֻ��Ҫһ��
#include<iostream>
using namespace std;

class Animal52
{
public:
	int m_Age;
};

//todo  ������̳п��Խ�����μ̳е�����--------------�ڼ̳�֮ǰ���Ϲؼ��ֱ�Ϊ��̳�virtual
//todo ��̳к�Animal���Ϊ�����
class Sheep52:virtual public Animal52
{

};

class Tuo52 :virtual public Animal52
{

};

class SheepTuo52 :public Sheep52, public Tuo52
{

};

void test5201()
{
	SheepTuo52 st;
	st.Sheep52::m_Age = 18;
	st.Tuo52::m_Age = 28;

	cout << "st.Sheep52::m_Age = " << st.Sheep52::m_Age << endl;
	cout << "st.Tuo52::m_Age = " << st.Tuo52::m_Age << endl;
	cout << st.m_Age << endl;
}
//todo  ��̳�֮��m_Age��ֻ��һ���ˣ����Դ򿪿�����Ա������ʾ����ʹ��
//todo  �ᷢ�ּ̳�������������Ĳ�����m_Age������ vbptr-------�����ָ��    virtual base pointer
//todo  �����ָ��vbptr��ָ��vbtable------�������-----���Եó�ƫ����-----�����ҵ�ָ���λ��
//todo  ʵ���Ͼ���˵��ԭ���������ڴ�ռ䣬���������ָ��ͬһ���ڴ�ռ��ָ�룬���ռ���ʾ�Ǹ�������ʹ���˵���
int main52()
{
	test5201();
	system("pause");
	return 0;
}