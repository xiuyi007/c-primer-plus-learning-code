//����һ��QueueTpģ�塣�ڳ����д���һ��ָ��Worker��ָ����У����øö�����������
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
		// ���ö������Ϣ
		p->Set();
		m_queue.Enqueue(*p);
	}
	cout << "\nHere is your staff: \n";
	int i;
	for (i = 0; i < ct; i++)
	{
		Worker* p = new Waiter;
		cout << endl;
		//��ӡ������Ϣ
		//m_queue.Dequeue(*p);
			//->Show();
	}
	//��������ڴ�
	for (i = 0; i < ct; i++)

	cout << "Bye." << endl;
	return 0;
}