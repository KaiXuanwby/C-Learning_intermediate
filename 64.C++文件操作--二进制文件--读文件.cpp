//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�   ostream& read( char * buffer , int len);
//�������ͣ�   �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
#include<iostream>
#include<fstream>
using namespace std;

class Person64
{
public:
	char m_Name[64];
	int m_Age;
};

void test6401()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	//�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�
	Person64 p;
	ifs.read((char*)&p, sizeof(Person64));
	cout << "������" <<p.m_Name<< "\t" << "���䣺" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	test6401();
	system("pause");
	return 0;
}