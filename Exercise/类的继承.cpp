#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*

6.定义A、B、C、D四个类，D继承C、C继承B、B继承A，
查看A、B、C、D类中构造函数、析构函数、拷贝构造函数调用顺序。
*/
class A
{
public:
	A()
	{
		cout << "类A的构造\n";
	}

	 virtual ~A()
	{
		cout << "类A的析构\n";
	}

};
class B :public A
{
public:
	B()
	{
		cout << "类B的构造\n";
	}
	virtual ~B()
	{
	
		cout << "类B的析构\n";
	}

};
class C : public B
{

public:
	C()
	{
		cout << "C的构造函数\n";
	}
	virtual ~C()
	{
		cout << "C的析构函数\n";
	}
};
class D : public C
{

public:
	D()
	{
		cout << "D的构造函数\n";
	}

	~D()
	{
		cout << "D的析构函数\n";
	}
};


class Father
{
public:
	
	virtual ~Father()
	{
	
	}
public:
	//纯虚函数
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
		cout << "我是儿子" << endl;
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