//左移运算符重载    
// <<  ---------  cout
//作用：可以输出自定义类型
#include<iostream>
using namespace std;

class Person40
{
public:
	Person40(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

	friend ostream& operator<<(ostream& cout, Person40& p);
private:

	//利用成员函数重载左移运算符   p,operator<< ( cout )    简化版本   p  <<  cout
	// todo 调用的对象会在重载运算符的左侧，传入的对象在右侧
	//通常不会用成员函数重载左移运算符，无法实现  cout在左侧
	/*void operator<<(cout)
	{

	}*/

	int m_A;
	int m_B;

};

//利用全局函数重载左移运算符
ostream& operator<<(ostream &cout,Person40 &p)   //本质    operator<<  ( cout , p )     简化   cout << p
{                                           //ostream    标准输出流对象-----cout   并且全局只能有一个，不能创建出新的，所以要加引用（第二个ostream&  ）
	cout << "m_A = " << p.m_A << endl;      //第一个ostream&     引用是为了优化性能并避免不必要的流对象拷贝
	cout << "m_B = " << p.m_B << endl;      //这里的形参列表并不一定要用cout  因为引用就是起的别名，起其他名字也可以
	return cout;                            //形参列表<<左边的放在第一位，<<右边的放在第二位
}
/*
	在C++中，重载左移运算符（`<<`）用于自定义对象的输出格式。这种重载通常需要将对象的信息写入到一个输出流（如`std::cout`）中。为了实现这一目的，你需要将输出流对象作为第一个参数传递给重载的左移运算符函数。

	在你提供的函数签名中，为什么要在`ostream`类型的参数后面加上引用呢？这是因为对于流对象（例如`std::cout`、`std::cerr`、`std::ofstream`等），我们希望避免不必要的拷贝操作，因为拷贝流对象可能会引起不必要的开销，并且可能会导致意外的行为。

	通过在流对象参数后面添加引用，你可以确保不会创建流对象的拷贝，而是直接操作传递给函数的原始流对象。这在操作流对象时是非常有效和安全的做法。

	所以，`ostream& operator<<(ostream &cout, Person40 &p)` 这个函数签名中的引用是为了优化性能并避免不必要的流对象拷贝。
*/

void test4001()
{
	Person40 p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	//cout << p.m_A << endl;
	cout << p << endl;;                             //如果全局函数重载左移运算符时，用的是void，这里写endl会报错，因为cout实际上是一个链式调用，也就是说，cout<<p结束以后返回的应该也是一个cout，这样endl;才能识别
}

int main40()
{
	test4001();
	system("pause");
	return 0;
}