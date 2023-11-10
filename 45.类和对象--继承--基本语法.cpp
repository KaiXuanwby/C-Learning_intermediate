//继承是面向对象的三大特征之一
//在某些编程时，会出现这样的情况，下级别的成员除了拥有上一级的共性，还有自己的特性
//这个时候我们就可以考虑利用继承的技术，减少重复代码
//todo继承的语法：class  子类 ：继承方式  父类
//子类  也称为  派生类
//父类  也称为  基类
#include<iostream>
using namespace std;

class Java4501
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python....(公共分类列表)" << endl;
	}
	void content()
	{
		cout << "Java视频（内容）" << endl;
	}
};

class Python4501
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python....(公共分类列表)" << endl;
	}
	void content()
	{
		cout << "Python视频（内容）" << endl;
	}
};

class CPP4501
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python....(公共分类列表)" << endl;
	}
	void content()
	{
		cout << "C++视频（内容）" << endl;
	}

};

//继承实现
//todo  继承的好处，减少重复代码
class Basepage45
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python....(公共分类列表)" << endl;
	}
};

class Java4502:public Basepage45
{
public:

	void content()
	{
		cout << "Java视频（内容）" << endl;
	}
};

class Python4502 :public Basepage45
{
public:
	void content()
	{
		cout << "Python视频（内容）" << endl;
	}
};

class CPP4502 :public Basepage45
{
public:
	void content()
	{
		cout << "C++视频（内容）" << endl;
	}
};

void test4501()
{
	cout << "XXXXXXXXXXXXXX" << endl;
	Java4502 ja;
	ja.header();
	ja.content();
	ja.footer();
	ja.left();
	cout << "----------------------------" << endl;
	Python4502 py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "----------------------------" << endl;
	CPP4502 cpp;
	cpp.content();
	cpp.footer();
	cpp.header();
	cpp.left();
}

int main45()
{
	test4501();

	system("pause");
	return 0;
}