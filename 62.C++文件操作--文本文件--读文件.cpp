//读文件与写文件步骤类似，但是读取方式相对于比较多

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*
读文件步骤如下：
1、包含头文件
	#include<fstream>
2、创建流对象
	ifstream ifs;
3、打开文件并判断文件是否打开成功
	ifs.open( " 文件路径 " , 打开方式 );
	ifs.is_open();    ------>返回值为布尔类型
4、读数据
	四种方式读取
5、关闭文件
	ifs.close();
*/
void test6201()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//第一种读取数据的方式
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//第二种读取数据的方式
	//char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	//第三种读取数据的方式
	string buf2;
	while (getline(ifs,buf2))
	{
		cout << buf << endl;
	}
	//第四种读取数据的方式
	char c;
	while ((c = ifs.get()) != EOF)  //EOF表示文件尾 end of file。while判断条件旨在，是否读到了文件尾
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