//从父类继承过来的成员，哪些属于子类对象中？
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

//利用开发人员命令提示工具查看对象模型
//跳转盘符   F:
//跳转文件路径  cd 具体文件路径
// dir 查看具体的文件路径
//查看命令
//  cl /d1 reportSingleClassLayout类名 文件名



void test4701()
{
	//todo 父类中所有的非静态成员属性都会被子类继承下去
	//todo 父类中的私有成员属性  是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
	cout << "size of Son = " << sizeof(Son47) << endl;
}

int main47()
{
	test4701();
	system("pause");
	return 0;
}