/*
	C++中利用new操作符在堆区开辟数据
	堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
	语法：  new 数据类型
	利用new创建的数据，会返回该数据对应的类型的指针
*/
#include<iostream>
using namespace std;

int* func()
{
	//new返回是 该数据类型的指针（地址）
	int* a = new int(10); //（10）表示创建一个变量，变量存放10
	return a;
}

void test0501()
{
	int* p = func();
	cout << *p << endl;
	//堆区的数据 由程序员管理开辟 程序员管理释放
	//如果您想释放堆区的数据，利用关键字 delete
	delete p;
	//cout << *p << endl; //内存已经被释放，再次访问就是非法操作，会报错
}

//在堆区利用new开辟数组
void test0502()
{
	//创建10整型数据的数组，在堆区
	int* arr = new int[10];//  [ 10 ]代表创建一个数组，数组里面有10个元素
	// todo 数组名不是指针，数组名只是在作为参数时可以当作指针，指针是有自己地址的
	//创建数组返回的是一段连续的内存空间的首地址
	//操作数组
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//赋值100~109
	}
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}

	//释放堆区数组
	//释放数组时，要加 [ ] 才可以，如果只写arr，就只释放首个元素
	delete[] arr;
}

int main05()
{
	test0501();
	test0502();
	system("pause");
	return 0;
}