//�������������
//ͨ�����ص����������ʵ���Լ�����������
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
	//����++�����

	//todo  ǰ�õ���--------------------����������Ϊ��һֱ��һ�����ݽ��е���������������ʽ���� ++(++a)
	MyInteger41& operator++()
	{
		m_Num++;
		return *this;
	}
	//todo ���õ���----------------------���ص���ֵ�����Ƕ������Բ������ã�����������÷��ص�temp��һ���ֲ��������س�Ա����������ͱ��ͷ��ˣ������ٽ��в����ͻᱨ��
	//todo void operator++(int)    int����ռλ������������������ǰ�ú��õ���
	MyInteger41 operator++(int)
	{
		//�ȼ�¼��ʱ�Ľ��
		MyInteger41 temp = *this;
		//�����
		m_Num++;

		//��󽫼�¼�Ľ�������صĲ���
		return temp;
	}
private:
	int m_Num;
};

//��Ϊ���������������Ҫ��������Ի���Ҫ�������������
//���������Ҳ��Ҫǰ�����ͺ�����

//���������
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
	��C++�У������������`++`������ͨ����Ա��������ȫ�ֺ����������ء�ѡ�����ַ�ʽȡ���������������ƫ�á�

	1. **��Ա�������أ�**

	��Ա�������ص����������ͨ������Ķ����ڲ�����������ʵ�ֵġ����صĵ������������û���κβ��������ǿ�����һ�������õģ������������Ա���������ǰ�õ����ͺ��õ�����

	```cpp
	class MyClass {
	public:
		// ǰ�õ������������
		MyClass& operator++() {
			// �ڴ�ʵ�ֵ�������
			return *this;
		}

		// ���õ������������
		MyClass operator++(int) {
			MyClass temp(*this);
			// �ڴ�ʵ�ֵ�������
			return temp;
		}
	};
	```

	2. **ȫ�ֺ������أ�**

	ȫ�ֺ������ص����������������ⲿ����������ʵ�ֵġ���Щ����ͨ����Ҫ����һ������������������һ���޸ĺ�Ķ���

	```cpp
	class MyClass {
		// �ඨ��
	};

	// ǰ�õ������������
	MyClass& operator++(MyClass& obj) {
		// �ڴ�ʵ�ֵ�������
		return obj;
	}

	// ���õ������������
	MyClass operator++(MyClass& obj, int) {
		MyClass temp(obj);
		// �ڴ�ʵ�ֵ�������
		return temp;
	}
	```

	�ܵ���˵��ѡ���Ա�������ػ���ȫ�ֺ�������ȡ�������������������ϣ��������ڲ��޸�˽�г�Ա�����ܸ��ʺ�ʹ�ó�Ա�������ء��������Ҫ���������ԣ��������صĲ��������漰�������࣬��ôȫ�ֺ������ؿ��ܸ����ʡ��������ַ�ʽ�����صĵ����������Ӧ�ð���Ԥ�ڵ��������ʵ�֡�
*/