//�Ӹ���̳й����ĳ�Ա����Щ������������У�
#include<iostream>
using namespace std;

class Base4701
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son47 :public Base4701
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�   F:
//��ת�ļ�·��  cd �����ļ�·��
// dir �鿴������ļ�·��
//�鿴����
//  cl /d1 reportSingleClassLayout���� �ļ���



void test4701()
{
	//todo ���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//todo �����е�˽�г�Ա����  �Ǳ��������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��
	cout << "size of Son = " << sizeof(Son47) << endl;
}

int main47()
{
	test4701();
	system("pause");
	return 0;
}