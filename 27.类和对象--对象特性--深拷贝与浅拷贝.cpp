//��ǳ���������Ծ������⣬Ҳ�ǳ�����һ����
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ������������ڴ�ռ䣬���п�������
#include<iostream>

using namespace std;

class Person27
{
public:

	//�ͷ�ԭ�򣬴����ջ��������Ƚ�������ȹ���ĺ�������
	Person27()
	{
		cout << "Person27��Ĭ�Ϲ��캯������" << endl;
	}
	Person27(int age, int height)
	{
		per_Height = new int(height);
		per_age = age;
		cout << "Person27���вι��캯������" << endl;
	}

	//�Լ�ʵ�ֿ������캯������������캯������������
	Person27(const Person27 &p)
	{
		cout << "person27�������캯���ĵ���" << endl;
		per_age = p.per_age;      // todo �򵥵ĸ�ֵ����----ǳ������Ҳ�Ǳ�����Ĭ�ϵĿ������캯���Ŀ�����ʽ
		//per_Height = p.per_Height;          //������Ĭ��ʵ�־������д���
		//�������

		per_Height = new int(*p.per_Height);  // todo ������д����ֱ�ӵ�ַ���ݣ�������д����ʹ�ü�ӵ��µ�ַ����
	}
	~Person27()
	{
		//�������룬���������ٵ��������ͷŲ���
		if (per_Height != NULL)
		{
			delete per_Height;   // todo  ǳ��������������---�������ڴ��ظ��ͷš���Ϊper_HeightΪָ�룬p1��p2��height��ָ��ͬһ���ڴ�ռ䣬���ͷ�p2ʱ���ڶ����������ڴ�ռ�ͱ�delete��
			                      // todo  ��p1�ͷ�ʱ���ͻ��ٴγ���ȥɾ�������ָͬ��Ŀռ䣨�ڶ����������ڴ�ռ��Ѿ���delete�ˣ����ͻᱨ��
									// todo Ҫ���ǳ�������������⣬��ʹ�����---������p1��p2ָ��ͬһ���ڴ�ռ䣬�������ͷ�ʱ�Ͳ����ظ��ͷ���
									//todo ͨ������дһ���������캯��-----������p1��p2ָ��ͬһ���ڴ�ռ�
			per_Height = NULL;   //��ֹҰָ����֣�ָ���ÿ�
		}
		cout << "Person27��������������" << endl;
	}
	int per_age;
	int* per_Height;
};

void test2701()
{
	Person27 p1(18, 165);
	cout << "p1������Ϊ��" << p1.per_age <<"���Ϊ��"<< *p1.per_Height << endl;  //��*������
	
	// 	//��� p1.per_age ��ռ���ڴ�ռ��ַ
	//cout << "p1.per_age ��ռ���ڴ�ռ��ַ��" << &p1.per_age << endl;

	//todo  ���ñ������ṩ�Ŀ������캯��������ǳ��������
	Person27 p2(p1);
	cout << "p2������Ϊ��" << p2.per_age <<"���Ϊ��" << *p2.per_Height << endl;
	//cout << "p2.per_age ��ռ���ڴ�ռ��ַ��" << &p2.per_age << endl;
}

int main27()
{
	test2701();

	system("pause");
	return 0;
}