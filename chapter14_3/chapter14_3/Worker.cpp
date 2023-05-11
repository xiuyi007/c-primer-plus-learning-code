#include "Worker.h"
#include <iostream>
using namespace std;
void Worker::Data() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}


void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Data();
}

void Waiter::Set()
{
	cout << "Enter waiter's name\n";
	Worker::Get();
}

void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Data() const
{
	cout << "Panache rating: " << panache << endl;
}




void Singer::Show() const
{
	cout << "Category: singer\n";
	Worker::Data();
}

void Singer::Set()
{
	cout << "Enter Singer's name\n";
	Worker::Get();
}

void Singer::Get()
{
	cout << "Enter Singer's voice: ";
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

void Singer::Data() const
{
	cout << "voice: " << voice << endl;
}