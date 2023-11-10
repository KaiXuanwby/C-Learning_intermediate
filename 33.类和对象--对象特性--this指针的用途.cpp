//通过上一节我们知道在C++中成员变量和成员函数是分开存储的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
//那么问题是： 这一块代码是如何区分哪个对象调用自己呢？
//todo C++通过提供特殊的对象指针this指针，解决上述问题，this指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用就可以
//this指针的用途：
//当形参和成员变量同名时，可以用this指针进行区分
//在类的非静态成员函数中返回对象本身，可以使用return *this
#include<iostream>
using namespace std;

class Person33
{
public:

	Person33(int age)
	{
		//todo   this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	Person33& PersonAddAge(Person33 &p)  //按引用传递，所以没有发生拷贝，相当于传递了对象本身。然后按引用返回，返回的即是对象本身
	{									 //注意这里要把函数的类型改为   类名+引用   ，引用指向本身内存，不引用就是拷贝了，而拷贝指向另一个内存
		this->age += p.age;
		return *this;                    //必须要指针的指针才能对p2进行修改，否则return  的只是p2的副本
	}									 // todo 不加&的话，这就是一个拷贝构造函数，返回的是拷贝的匿名对象----在拷贝构造函数的调用时机：值传递的方式给函数参数传值这一点有详细说明
	/*
		在这段C++代码中，将`PersonAddAge()`函数的类型声明为`Person33&`（即返回一个引用）是为了实现链式调用的效果，以便在一行代码中多次调用该函数并修改同一个对象的属性。这样的设计可以使代码更加简洁和易读，而不需要显式地为每个调用创建临时副本。

		让我们来看一下这段代码中链式调用的原理：

		```cpp
		p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
		```

		首先，我们有一个`p2`对象，然后我们连续三次调用了`PersonAddAge(p1)`函数，并将同一个对象`p1`传递给它。由于`PersonAddAge()`函数返回一个`Person33&`类型的引用，这意味着每次调用该函数后，返回的引用仍然指向调用它的对象（即`p2`），从而使我们能够继续在返回的对象上进行下一个函数调用。

		如果`PersonAddAge()`函数的返回类型是`Person33`（不带引用），那么每次调用该函数时都会返回一个临时副本，而不是引用。这样，后续的函数调用就会在不同的副本上执行，而不会影响原始的`p2`对象。这将导致代码的行为不符合预期，因为我们希望对同一个对象进行多次连续的修改。

		因此，为了实现链式调用并确保在同一个对象上进行连续修改，`PersonAddAge()`函数的返回类型被声明为`Person33&`，从而允许在每次调用后继续在同一个对象上执行下一个函数调用。
	*/
	/*
		如果`PersonAddAge()`函数的返回类型是`Person33`（不带引用），每次调用该函数时都会返回一个临时副本，因为在函数调用完成后，返回值会被拷贝到一个新的对象中，而不是保持对原始对象的引用。

		让我们以更详细的方式来解释这个过程：

		1. 假设`PersonAddAge()`的返回类型是`Person33`（不带引用）。
		2. 当你在链式调用中调用`p2.PersonAddAge(p1)`时，函数会执行并返回一个新的`Person33`对象，该对象包含了`p2`的年龄加上`p1`的年龄。
		3. 接着，在这个新返回的对象上，你调用了`.PersonAddAge(p1)`，同样会创建一个新的`Person33`对象，其中包含前面返回的对象的年龄加上`p1`的年龄。
		4. 这个过程在每次函数调用中都会重复，导致每次调用都会创建一个新的临时副本对象。

		由于这些临时副本对象是独立的，因此连续的函数调用不会影响原始的`p2`对象，也就是说，每次调用都在独立的对象上进行操作。

		这与返回引用的情况不同，返回引用会使得连续的函数调用在同一个对象上进行操作，因为引用本质上是原始对象的别名，它不会创建新的对象。

		所以，为了实现链式调用并确保在同一个对象上进行连续修改，`PersonAddAge()`函数的返回类型需要是`Person33&`，以保持对原始对象的引用。
	*/
	int age;
};

//todo 解决名称冲突                 这里也可以用初始化列表，也可以用类对象区域声明  Person33 : :
void test3301()
{
	Person33 p1(18);   //this指向p1
	cout << "p1的年龄为： " << p1.age << endl;
}

//todo 返回对象本身用*this
void test3302()
{
	Person33 p1(10);
	Person33 p2(23);
	// todo 链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);  //链式调用: 让  p2.PersonAddAge(p1)  执行完毕后，（返回值）还是p2，使下一个.PersonAddAge(p1)还可以调用并且调用到p2上
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p2的地址：" << (long long)&p2 << endl;
	Person33* loc_p2 = &p2.PersonAddAge(p1);     //如果不加&，会报错，说明是临时创建的一个空间存放 p2.PersonAddAge(p1)的值
	cout << "p2调用后的返回值地址：" << (long long)loc_p2 << endl;

}

int main33()
{
	test3301();
	test3302();
	system("pause");
	return 0;
}