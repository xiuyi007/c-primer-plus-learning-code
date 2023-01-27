#include "head.h"
#include "iostream""

namespace SALES {
	void SALES::setSales(Sales& s, const double ar[], int n)
	{
		using namespace std;
		if (n > 4) {
			cout << "your input is over 4" << endl;
			return;
		}
		else
		{
			double average = 0;
			double max = ar[0];
			double min = ar[0];
			for (int i = 0; i < n; i++)
			{
				if (ar[i] > max)
					max = ar[i];
				if (ar[i] < min)
					min = ar[i];
				average += ar[i];
				s.sales[i] = ar[i];
			}
			average /= n;
			s.average = average;
			s.max = max;
			s.min = min;
		}
	}

	void SALES::setSales(Sales& s)
	{
		using namespace std;

		cout << "input salses for 4 quaters: " << endl;
		double ar[4];
		double average = 0, max = -DBL_MAX, min = DBL_MAX;
		for (int i = 0; i < 4; i++)
		{
			cin >> ar[i];
			if (ar[i] > max)
				max = ar[i];
			if (ar[i] < min)
				min = ar[i];
			average += ar[i];
		}
		average /= 4;
		s.average = average;
		s.max = max;
		s.min = min;
	}

	void SALES::showSales(const Sales& s)
	{
		using namespace std;
		cout << "sales: " << s.sales << endl;
		cout << "average: " << s.average << endl;
		cout << "max: " << s.max << endl;
		cout << "min" << s.min << endl;
	}
}
