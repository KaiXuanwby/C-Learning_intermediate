//�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
#include<iostream>
using namespace std;

//��Ա����˽�л�
class Person
{
public:
	void setName(string name)  //д
	{
		per_Name = name;
	}
	string getName()  //��
	{
		return per_Name;
	}
	//��ȡ����  �ɶ���д  ������޸ģ�����ķ�Χ������ 0~ 150 ֮�䣩
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "��������" << endl;
			per_Age = 0;
			return;
		}
		per_Age = age;
	}
	
	int getAge()  //ֻ��
	{
		
		return per_Age;
	}
	void setLover(string lover)
	{
		per_Lover = lover;
	}
private:
	string per_Name;  //����  �ɶ���д
	int per_Age;      //����  ֻ��
	string per_Lover; //����  ֻд 


};

int main20()
{
	Person p;
	p.setName("����");
	cout << "����Ϊ��" << p.getName() << endl;
	p.setAge(1000);
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLover("kaixuan");


	system("pause");
	return 0;
}