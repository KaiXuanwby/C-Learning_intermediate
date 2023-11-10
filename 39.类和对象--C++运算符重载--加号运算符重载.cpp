//todo运算符重载的概念：对已有的运算符重新定义，赋予另外一种功能，以适应不同的数据类型
//作用：实现两个自定义数据类型的相加运算
#include<iostream>
using namespace std;

class Person39
{
	//todo  通过成员函数重载加号
public:
	//通过自己写的成员函数，实现两个对象相加属性后返回的对象--------自己起的名称是  PersonAddPerson
	Person39 PersonAddPerson(Person39& p)
	{
		Person39 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}

	//编译器起了一个通用名称，通过成员函数重载加号------------编译器起的名称是operator+
	Person39 operator+(Person39& p)
	{
		Person39 temp;
		temp.m_B = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
	int m_A;
	int m_B;
};

void test3901()
{
	Person39 p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person39 p2;
	p2.m_A = 20;
	p2.m_B = 20;

	//实现两个实例对象的对应属性相加-------------自己写的成员函数
	Person39 p3 = p2.PersonAddPerson(p1);
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	//Person39 p4 = p2.operator+(p1);     该行可以简写为：
	Person39 p4 = p2 + p1;
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}


//todo  通过全局函数重载加号
Person39 operator+ (const Person39& p1,const Person39& p2)   //在全局函数进行运算符重载的时候，建议在类之前加const，防止与类中的成员函数的运算符重载冲突
{															 //如果不加const，编译器无法确定在调用语句Person39 p3 = p1 + p2;时，用全局函数重载，还是成员函数重载，产生歧义，会报错
	Person39 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
/*
	在上述代码中，如果在全局函数重载加号时没有使用 `const`，会与类中成员函数重载加号产生冲突。C++编译器会在解析运算符重载时优先选择成员函数版本，因为成员函数具有更高的优先级，这可能会导致编译错误或意外的行为。

	在 C++ 中，编译器在查找适当的运算符重载函数时会考虑以下几个因素：

	1. 成员函数的优先级高于全局函数。
	2. 如果有多个候选函数可以匹配，编译器会选择“最佳匹配”的函数。具体选择是基于函数参数的类型匹配以及是否需要进行隐式类型转换。
	3. 如果出现歧义，编译器会报错。

	因此，如果你在全局函数重载加号时没有使用 `const`，而类中有成员函数版本的加号运算符重载，就会产生冲突，编译器可能会报错，指示出现了歧义。为避免这种冲突，确保在全局函数重载中使用 `const` 来标识参数是常量引用。

	以下是修正后的代码，其中在全局函数重载中使用了 `const`：

	```cpp
	#include <iostream>
	using namespace std;

	class Person39
	{
	public:
		// ...

		Person39 operator+(Person39& p)
		{
			// ...
		}
	};

	Person39 operator+(const Person39& p1, const Person39& p2)
	{
		// ...
	}

	Person39 operator+(const Person39& p1, int num)
	{
		// ...
	}

	// ...

	int main()
	{
		// ...
		system("pause");
		return 0;
	}
	```

	这样做可以确保不会与类中的成员函数重载产生冲突，并且能够正确地重载加号运算符。
*/
/*
	在全局函数重载运算符时，特别是对于一元运算符（如加号 `+`）或需要在操作数之间传递大型对象时，建议使用常量引用作为参数。这是因为使用常量引用可以避免不必要的对象复制，提高了性能并减少了内存开销。

	如果不使用引用，而是直接传递对象作为参数，会导致每次调用函数时都会进行一次对象的复制，这可能会造成性能问题，特别是当对象较大时。另外，如果不使用常量引用，还可能会导致一些对象在函数内部被修改，而不是预期的只是读取操作。

	当你在全局函数重载加号时使用常量引用作为参数，它允许你对参数对象进行读取操作，但不允许对其进行修改。这有助于确保运算符重载函数不会意外地修改传递的对象，并且不会引发副作用。

	总之，使用常量引用作为参数是一种良好的编程实践，可以提高性能并确保代码的可预测性和稳定性。
*/

//运算符重载也可以发生函数重载
Person39 operator+ (const Person39& p1, int num)
{
	Person39 temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}


void test3902()
{
	Person39 p1;
	p1.m_A = 35;
	p1.m_B = 10;

	Person39 p2;
	p2.m_A = 20;
	p2.m_B = 15;

	//Person39 p3 = operator+(p1, p2);     该行可以简写为：
	Person39 p3 = p1 + p2;
	
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	Person39 p4 = p1 + 10;
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;

}

int main39()
{
	test3901();
	test3902();
	system("pause");
	return 0;
}