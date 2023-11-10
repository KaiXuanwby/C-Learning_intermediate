//深浅拷贝是面试经典问题，也是常见的一个坑
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请内存空间，进行拷贝操作
#include<iostream>

using namespace std;

class Person27
{
public:

	//释放原则，存放在栈区里，所以先进后出（先构造的后析构）
	Person27()
	{
		cout << "Person27的默认构造函数调用" << endl;
	}
	Person27(int age, int height)
	{
		per_Height = new int(height);
		per_age = age;
		cout << "Person27的有参构造函数调用" << endl;
	}

	//自己实现拷贝构造函数解决拷贝构造函数带来的问题
	Person27(const Person27 &p)
	{
		cout << "person27拷贝构造函数的调用" << endl;
		per_age = p.per_age;      // todo 简单的赋值操作----浅拷贝，也是编译器默认的拷贝构造函数的拷贝方式
		//per_Height = p.per_Height;          //编译器默认实现就是这行代码
		//深拷贝操作

		per_Height = new int(*p.per_Height);  // todo 编译器写的是直接地址传递，而该行写的是使用间接的新地址传递
	}
	~Person27()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (per_Height != NULL)
		{
			delete per_Height;   // todo  浅拷贝带来的问题---堆区的内存重复释放。因为per_Height为指针，p1和p2的height都指向同一个内存空间，先释放p2时，在堆区创建的内存空间就被delete了
			                      // todo  当p1释放时，就会再次尝试去删除这个共同指向的空间（在堆区创建的内存空间已经被delete了），就会报错。
									// todo 要解决浅拷贝产生的问题，就使用深拷贝---不再让p1和p2指向同一个内存空间，这样在释放时就不会重复释放了
									//todo 通过重新写一个拷贝构造函数-----不再让p1和p2指向同一个内存空间
			per_Height = NULL;   //防止野指针出现，指针置空
		}
		cout << "Person27的析构函数调用" << endl;
	}
	int per_age;
	int* per_Height;
};

void test2701()
{
	Person27 p1(18, 165);
	cout << "p1的年龄为：" << p1.per_age <<"身高为："<< *p1.per_Height << endl;  //加*解引用
	
	// 	//输出 p1.per_age 所占的内存空间地址
	//cout << "p1.per_age 所占的内存空间地址：" << &p1.per_age << endl;

	//todo  利用编译器提供的拷贝构造函数，会做浅拷贝操作
	Person27 p2(p1);
	cout << "p2的年龄为：" << p2.per_age <<"身高为：" << *p2.per_Height << endl;
	//cout << "p2.per_age 所占的内存空间地址：" << &p2.per_age << endl;
}

int main27()
{
	test2701();

	system("pause");
	return 0;
}