#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*

6.����A��B��C��D�ĸ��࣬D�̳�C��C�̳�B��B�̳�A��
�鿴A��B��C��D���й��캯���������������������캯������˳��
*/
class A
{
public:
	A()
	{
		cout << "��A�Ĺ���\n";
	}

	 virtual ~A()
	{
		cout << "��A������\n";
	}

};
class B :public A
{
public:
	B()
	{
		cout << "��B�Ĺ���\n";
	}
	virtual ~B()
	{
	
		cout << "��B������\n";
	}

};
class C : public B
{

public:
	C()
	{
		cout << "C�Ĺ��캯��\n";
	}
	virtual ~C()
	{
		cout << "C����������\n";
	}
};
class D : public C
{

public:
	D()
	{
		cout << "D�Ĺ��캯��\n";
	}

	~D()
	{
		cout << "D����������\n";
	}
};


class Father
{
public:
	
	virtual ~Father()
	{
	
	}
public:
	//���麯��
	virtual void print() = 0;


};



class son : public Father
{
public:
	~son()
	{
	
		
	}
	
public:
	virtual void print()
	{
		cout << "���Ƕ���" << endl;
	}
	
};




int test()
{
	 Father  *father = new  son;
	 father->print();

	return 0;

}




int main(){

	/*class A a;
	class B b;
	class C c;
	class D d;*/
	test();
	system("pause");
	return EXIT_SUCCESS;
}