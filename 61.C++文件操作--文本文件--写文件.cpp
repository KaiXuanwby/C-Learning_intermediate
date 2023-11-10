//文件操作
//程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
//todo通过文件可以将数据持久化
//todoC++中对文件操作需要包含头文件<fstream>
//文件类型分为两种：
//1、文本文件：文件以文本的  ASCII码  形式存储在计算机中
//2、二进制文件：文件以文本的  二进制  形式存储在计算机中，用户一般不能直接读懂它们
//操作文件的三大类：
//todo1、ofstream：写操作     output
//todo2、ifstream：读操作      input
//todo3、fstream：读写操作   output & input
#include<iostream>
#include<fstream>
using namespace std;

/*
写文件的步骤如下
1、包含头文件
	#include<fstream>
2、创建流对象
	ofstream ofs;     //文件的输出流对象，类比cout
3、打开文件
	ofs.open( " 文件路径 " , 打开方式 )
4、写数据
	ofs << "写入的数据"
5、关闭文件
	ofs.close();
*/
/*
文件的打开方式							解释
ios::in									为读文件而打开文件
ios::out									为写文件而打开文件
ios::ate									初始位置：文件尾
ios::app									追加方式写文件
ios::trunc									如果文件存在先删除，在创建
ios::binary									二进制方式
*/
//todo注意：文件打开方式可以配合使用，利用按位或  |  操作符
//例如：用二进制方式写文件  ios::binary  |  ios::out

void test6101()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "好久不见，凯旋" << endl;
	ofs << "好久不见，老二" << endl;
	ofs << "好久不见，欣雨" << endl;
	ofs.close();
}

int main61()
{
	test6101();
	system("pause");
	return 0;
}