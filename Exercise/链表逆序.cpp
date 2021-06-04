#include <iostream>

using namespace std;



typedef struct Ls
{
	int a;
	struct Ls *next;
}ls;


class list
{
public:

	list();
	int list_rev();
	int list_push(int node_data);
	int show();
	~list();
private:
	ls * head;
};

list::list()
{
	ls * head = (ls *)malloc(sizeof(ls));
	memset(head, 0x00, sizeof(ls));
	head->next = NULL;

	this->head = head;
}


int list::list_push(int node_data)
{
	ls *pre = NULL;
	pre = this->head;
	while (pre->next != NULL)
	{
		pre = pre->next;
	}
	ls * node = (ls *)malloc(sizeof(ls));
	memset(node, 0x00, sizeof(ls));
	node->a = node_data;
	node->next = NULL;
	pre->next = node;

	return 0;
}

//默认调用析构释放内存
list::~list()
{
	if (NULL == head)
	{
		return ;
	}
	ls * pre = NULL;
	ls * pcu = NULL;
	pre = head;

	while (pre->next != NULL)
	{
		pcu = pre->next;
		free(pre);
		pre = pcu;
	}
}

int list::show()
{
	ls * p_head = head;
	while (p_head != NULL)
	{
		cout << p_head->a << ' ';
		p_head = p_head->next;
	}		
	return 0;
}

int list::list_rev()
{
	ls * p1 = this->head;
	ls * p2 = p1->next;
	ls * p3 = NULL;
	head->next = NULL;
	while (p2 != NULL)
	{
		p3 = p2->next;
		p2->next = p1;
		p1 = p2; 
		p2 = p3;	
	}

	head = p1;
	return 0;
}


int main()
{
	
	class list  mylist;

	mylist.list_push(10);
	mylist.list_push(20);
	mylist.list_push(30);
	mylist.list_push(40);

	mylist.show();


	mylist.list_rev();

	mylist.show();


	system("pause");
}