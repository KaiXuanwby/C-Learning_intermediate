//递增运算符重载
//通过重载递增运算符，实现自己的整型数据
#include<iostream>
using namespace std;

class MyInteger41
{
	friend ostream& operator<<(ostream& cout, MyInteger41 myint);
public:
	MyInteger41()
	{
		m_Num = 0;
	}
	//重载++运算符

	//todo  前置递增--------------------返回引用是为了一直对一个数据进行递增操作，比如链式操作 ++(++a)
	MyInteger41& operator++()
	{
		m_Num++;
		return *this;
	}
	//todo 后置递增----------------------返回的是值，不是对象，所以不加引用，如果加了引用返回的temp是一个局部对象，重载成员函数运行完就被释放了，后面再进行操作就会报错
	//todo void operator++(int)    int代表占位参数，可以用于区分前置后置递增
	MyInteger41 operator++(int)
	{
		//先记录当时的结果
		MyInteger41 temp = *this;
		//后递增
		m_Num++;

		//最后将记录的结果做返回的操作
		return temp;
	}
private:
	int m_Num;
};

//因为重载自增运算符需要输出，所以还需要重载左移运算符
//自增运算符也需要前自增和后自增

//左移运算符
ostream& operator<<(ostream& cout, MyInteger41 myint)
{
	cout << "myint = " << myint.m_Num << endl;
	return cout;
}


void test4101()
{
	MyInteger41 myint;
	cout << myint << endl;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test4102()
{
	MyInteger41 myint;
	cout << myint << endl;
	cout << myint++ << endl;
	cout << (myint++)++ << endl;
	cout << myint << endl;
}


int main41()
{
	test4101();
	test4102();
	/*int a = 0;
	cout << ++(++a) << endl;
	cout << a << endl;*/

	system("pause");
	return 0;
}
/*
	在C++中，递增运算符（`++`）可以通过成员函数或者全局函数进行重载。选择哪种方式取决于你的需求和设计偏好。

	1. **成员函数重载：**

	成员函数重载递增运算符是通过在类的定义内部创建函数来实现的。重载的递增运算符函数没有任何参数，但是可以有一个（无用的）整数参数，以便用于区分前置递增和后置递增。

	```cpp
	class MyClass {
	public:
		// 前置递增运算符重载
		MyClass& operator++() {
			// 在此实现递增操作
			return *this;
		}

		// 后置递增运算符重载
		MyClass operator++(int) {
			MyClass temp(*this);
			// 在此实现递增操作
			return temp;
		}
	};
	```

	2. **全局函数重载：**

	全局函数重载递增运算符是在类的外部创建函数来实现的。这些函数通常需要接受一个类对象参数，并返回一个修改后的对象。

	```cpp
	class MyClass {
		// 类定义
	};

	// 前置递增运算符重载
	MyClass& operator++(MyClass& obj) {
		// 在此实现递增操作
		return obj;
	}

	// 后置递增运算符重载
	MyClass operator++(MyClass& obj, int) {
		MyClass temp(obj);
		// 在此实现递增操作
		return temp;
	}
	```

	总的来说，选择成员函数重载还是全局函数重载取决于你的设计需求。如果你希望在类的内部修改私有成员，可能更适合使用成员函数重载。如果你想要更多的灵活性，或者重载的操作可能涉及到其他类，那么全局函数重载可能更合适。无论哪种方式，重载的递增运算符都应该按照预期的语义进行实现。
*/