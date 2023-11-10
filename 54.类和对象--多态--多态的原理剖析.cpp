#include<iostream>
using namespace std;

class Animal5401
{
public:
	//虚函数
	virtual void Speak()
	{
		cout << "Animal is speaking" << endl;
	}
};

class Cat5401 :public Animal5401
{                                 //因为Cat继承了Animal所以Cat中也有vfptr---->vftable  (  存储 ： &Animal::Speak()  )  
public:
	void Speak()            //当子类发生重写，重写了父类的虚函数后
	{						//todo子类中的虚函数表中的内容  会替换成  子类的虚函数地址
		cout << "Cat is speaking" << endl;     //todo  也就是说 &Animal::Speak()  被替换为   &Cat::Speak()
	}										   //todo  注意：父类中的vftable没有改变。还是&Animal::Speak()
	
	
};

class Dong5401 :public Animal5401
{
public:
	void Speak()
	{
		cout << "Dog is speaking" << endl;
	}
};

//todo 父类的指针或者引用  指向子类对象的时候就发生了多态   Animal &animal = cat;
void doSpeak(Animal5401 &animal)
{
	animal.Speak();  //由于发生了多态，animal现在指向的一个cat 的对象，所以会去Cat的虚函数表vftable中获取函数
}

void test5401()
{
	Cat5401 cat;
	doSpeak(cat);
	cout << endl;
	Dong5401 dog;
	doSpeak(dog);
}

void test5402()
{
	cout << "sizeof Animal = " << sizeof(Animal5401) << endl;
	//复习：只有非静态成员变量存储于类，静态函数和成员，非静态函数都不存储于类，只有一个空类
	//todo 加上  virtual  以后变为8，32位编译器下为4，说明类中多了一个指针
	//todo指针名称为vfptr----虚函数(表)指针  virtual function pointer  指向vftable  虚函数表
	//表的内部记录虚函数的地址   &Animal::Speak()
}

int main54()
{
	test5402();
	test5401();
	system("pause");
	return 0;
}