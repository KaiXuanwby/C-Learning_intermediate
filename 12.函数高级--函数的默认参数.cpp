//在C++中，函数的形参列表中的形参是可以有默认值的
//语法：   返回值类型  函数名  ( 参数 = 默认值 )  {  }
#include<iostream>
using namespace std;

//函数的默认参数
//如果调用时自己传入了数据，就用自己的数据，如果没有，那么就用默认值
int func1201(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int func1202(int a, int b, int c)
{
	return a + b + c;
}

//注意事项
//如果某个位置已经有了默认参数，那么从这个位置往后的所有参数都必须有默认值
//          int func1202(int a, int b, int c)--->int func1202(int a, int b=10, int c)  :报错，c也必须有默认值
//如果函数声明有默认参数，函数的实现就不能有默认参数
//声明和实现最多只能有一个有默认参数
/*
	int  func2(int a = 10,int b =10)
	int func2(int a = 20,int b =20) {   }
*/
int main12()
{
	cout << func1201(10) << endl;  //形参有了默认值时，在主函数传值时，可以不必要传入，也不会报错
	cout << func1201(1, 2, 3) << endl;

	//cout <<func1202(1)//  报错，函数调用中的参数太少

	system("pause");
	return 0;
}
