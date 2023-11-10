//以二进制的方式读写文件
//打开方式指定为   ios::binary

//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：   ostream& write(const char * buffer , int len);
//参数解释：   字符指针buffer指向内存中一段存储空间，len是读写的字节数
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
	//包含头文件
	//创建流对象
	ofstream ofs;
	//打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	//写文件
	Person63 p = { "凯旋",18 };
	ofs.write((const char*)&p, sizeof(Person63));
	//关闭文件
	ofs.close();
}

int main63()
{
	test6301();
	system("pause");
	return 0;
}