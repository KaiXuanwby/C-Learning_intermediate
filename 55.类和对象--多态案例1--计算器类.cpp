//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//��̬���ŵ㣺
//������֯�ṹ����
//�ɶ���ǿ
//����ǰ�ںͺ��ڵ���չ�Լ�ά��
#include<iostream>
using namespace std;

//��ͨ��д-------�����ڿ�����ά���Լ���չ
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//todo  �������չ�µĹ��ܣ������޸�Դ�� 
		//todo  �ڿ�����  �ᳫ  ����ԭ��
		//todo  ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
		/*else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}
		else
		{
			cout << "��Ǹ���������벻�Ϸ�" << endl;
		}*/
	}

	int m_Num1;
	int m_Num2;
};

void test5501()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
	//cout << c.m_Num1 << " / " << c.m_Num2 << " = " << c.getResult("/") << endl;
}


//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class AbstractCalculator55
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//������������
class SubCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test5502()
{
	//��̬��ʹ�ã������ָ���������ָ���������
	//�ӷ�����
	AbstractCalculator55* abc = new AddCalculator55;  //����һ���ӷ��ļ�����������ø����ָ��ָ����
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

	//new �������˶����������ǵ�����
	delete abc;    //ֻ�ͷ��˶��������ݣ�ָ�������û�б�

	//��������
	abc = new SubCalculator55;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�������
	abc = new MulCalculator55;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main55()
{
	test5502();
	//test5501();
	system("pause");
	return 0;
}