//���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
���ļ��������£�
1������ͷ�ļ�
	#include<fstream>
2������������
	ifstream ifs;
3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open( " �ļ�·�� " , �򿪷�ʽ );
	ifs.is_open();    ------>����ֵΪ��������
4��������
	���ַ�ʽ��ȡ
5���ر��ļ�
	ifs.close();
*/
void test6201()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//��һ�ֶ�ȡ���ݵķ�ʽ
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//�ڶ��ֶ�ȡ���ݵķ�ʽ
	//char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	//�����ֶ�ȡ���ݵķ�ʽ
	string buf2;
	while (getline(ifs,buf2))
	{
		cout << buf << endl;
	}
	//�����ֶ�ȡ���ݵķ�ʽ
	char c;
	while ((c = ifs.get()) != EOF)  //EOF��ʾ�ļ�β end of file��while�ж�����ּ�ڣ��Ƿ�������ļ�β
	{
		cout << c;
	}
	ifs.close();
}

int main62()
{
	test6201();
	system("pause");
	return 0;
}