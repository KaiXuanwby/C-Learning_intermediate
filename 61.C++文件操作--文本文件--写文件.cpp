//�ļ�����
//��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
//todoͨ���ļ����Խ����ݳ־û�
//todoC++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>
//�ļ����ͷ�Ϊ���֣�
//1���ı��ļ����ļ����ı���  ASCII��  ��ʽ�洢�ڼ������
//2���������ļ����ļ����ı���  ������  ��ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
//�����ļ��������ࣺ
//todo1��ofstream��д����     output
//todo2��ifstream��������      input
//todo3��fstream����д����   output & input
#include<iostream>
#include<fstream>
using namespace std;

/*
д�ļ��Ĳ�������
1������ͷ�ļ�
	#include<fstream>
2������������
	ofstream ofs;     //�ļ���������������cout
3�����ļ�
	ofs.open( " �ļ�·�� " , �򿪷�ʽ )
4��д����
	ofs << "д�������"
5���ر��ļ�
	ofs.close();
*/
/*
�ļ��Ĵ򿪷�ʽ							����
ios::in									Ϊ���ļ������ļ�
ios::out									Ϊд�ļ������ļ�
ios::ate									��ʼλ�ã��ļ�β
ios::app									׷�ӷ�ʽд�ļ�
ios::trunc									����ļ�������ɾ�����ڴ���
ios::binary									�����Ʒ�ʽ
*/
//todoע�⣺�ļ��򿪷�ʽ�������ʹ�ã����ð�λ��  |  ������
//���磺�ö����Ʒ�ʽд�ļ�  ios::binary  |  ios::out

void test6101()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "�þò���������" << endl;
	ofs << "�þò������϶�" << endl;
	ofs << "�þò���������" << endl;
	ofs.close();
}

int main61()
{
	test6101();
	system("pause");
	return 0;
}