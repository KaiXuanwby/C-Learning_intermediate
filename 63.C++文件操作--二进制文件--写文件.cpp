//�Զ����Ƶķ�ʽ��д�ļ�
//�򿪷�ʽָ��Ϊ   ios::binary

//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ�   ostream& write(const char * buffer , int len);
//�������ͣ�   �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
#include<iostream>
#include<fstream>
using namespace std;

class Person63
{
public:
	char m_Name[64];
	int m_Age;
};

void test6301()
{
	//����ͷ�ļ�
	//����������
	ofstream ofs;
	//���ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	//д�ļ�
	Person63 p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person63));
	//�ر��ļ�
	ofs.close();
}

int main63()
{
	test6301();
	system("pause");
	return 0;
}