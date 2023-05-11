//定义一个QueueTp模板。在程序中创建一个指向Worker的指针队列，并用该队列来测试他
#include "Queue_tgf.h"
#include <iostream>
#include "Worker.h"
const  int SIZE = 5;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;


	Queue_tgf<Worker> m_queue;
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n" << "w: waiter / s:singer q: quit " << endl;
		cin >> choice;
		while (std::strchr("ws", choice) == NULL)
		{
			cout << "Please enter a w, s or q" << endl;
			cin >> choice;
		}
		if (choice == 'q')
			break;
		// push the obj into the queue according to the choice
		Worker* p;
		switch (choice)
		{
		case 'w':
			p = new Waiter();
			break;
		case 's':
			p = new Singer();
			break;
		default:
			break;
		}
		cin.get();
		// 设置对象的信息
		p->Set();
		m_queue.Enqueue(*p);
	}
	cout << "\nHere is your staff: \n";
	int i;
	for (i = 0; i < ct; i++)
	{
		Worker* p = new Waiter;
		cout << endl;
		//打印对象信息
		//m_queue.Dequeue(*p);
			//->Show();
	}
	//清除对象内存
	for (i = 0; i < ct; i++)

	cout << "Bye." << endl;
	return 0;
}