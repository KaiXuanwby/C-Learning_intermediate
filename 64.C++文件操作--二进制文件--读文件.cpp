//二进制方式写文件主要利用流对象调用成员函数read
//函数原型：   ostream& read( char * buffer , int len);
//参数解释：   字符指针buffer指向内存中一段存储空间，len是读写的字节数
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
	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//打开文件
	Person64 p;
	ifs.read((char*)&p, sizeof(Person64));
	cout << "姓名：" <<p.m_Name<< "\t" << "年龄：" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	test6401();
	system("pause");
	return 0;
}