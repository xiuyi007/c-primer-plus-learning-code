#include "queue.h"
#include "customer.h"  //其实queue中已经include了，所以不必要, 下同
#include <cstdlib>
#include <time.h>
#include <iostream>


//没做出来！！！！！！！！！！！！！！！！！！

bool hasCustomerIn(double);
using namespace std;
static const int min_per_hour = 60;
int main()
{
	srand(time(0));
	int awayNum = 0, accepted = 0, waitTime = 0, sum_line = 0;

	cout << "input how many hours will the simulation last: ";
	int hours = 0, minutes = 0;
	cin >> hours;
	minutes = hours * min_per_hour;

	int minute = 0, cusNum = 0, avgNum = 0;
	cout << "input how many customers may com per hour: ";
	cin >> cusNum;
	avgNum = minutes / (cusNum * hours); //平均每几分钟来一个人

	cout << "input size of queue: ";
	int size = 0;
	cin >> size;
	Queue queue(size);

	Item tmp;
	int process = 0, wtime = 0;
	while (minute < minutes)
	{
		if (hasCustomerIn(avgNum))
		{
			if (queue.isfull())
				awayNum++;
			else
			{
				tmp.set(minute);
				queue.enqueue(tmp);
			}
		}
		if (process <= 0 && !queue.isempty())
		{
			accepted++;
			queue.dequeue(tmp);
			process = tmp.ptime();
			wtime = minute - tmp.when();
			waitTime += wtime;
		}
		process--;
		minute++;
		sum_line += queue.count();
	}
	double avgWait = waitTime / accepted;
	cout << "customer accepted: " << accepted << endl;
	cout << "customer awayed: " << awayNum << endl;
	cout << "average queue size: " << sum_line / minutes << endl;
	cout << "customer waited per: " << avgWait << " minutes" << endl;
	cout << "done" << endl;
	return 0;
}

bool hasCustomerIn(double x)
{
	return (rand() * x / RAND_MAX < 1);
}