//��ָ����ʳ�Ա������C++�еĿ�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Person34
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//�����ԭ������Ϊ�����ָ����ΪNULL
		if (this == NULL)    //��ߴ���Ľ�׳��
		{
			return;
		}
		cout << "age = " << this->per_age << endl;
	}

	int per_age;
};

void test3401()
{
	Person34* p = NULL;  //��ָ����Ե��ó�Ա���������ó�Ա���ܷ��ʳ�Ա����
	p->showClassName();  //��Ϊp�ǿ�ָ�룬���Զ�Ӧ��thisҲ�ǿյģ��޷����ʳ�Ա����
	p->showPersonAge();
}

int main34()
{
	test3401();

	system("pause");
	return 0;
}