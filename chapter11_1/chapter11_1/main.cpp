/* srand example */

#include <cstdlib>
#include<ctime>
#include <fstream>
#include "Vector.h"
#include <iostream>

int main()
{
	std::fstream fs;
	fs.open("random-walker.txt");
	if (fs.is_open())
	{
		std::cout << "okay, random-walker.txt is opened now" << std::endl;
	}
	else
	{
		std::cout << "sorry, random-waler.txt failed to open, may be there are some problems" << std::endl;
		return 0;
	}
	const double trans = 3.14 / 180;
	using std::cout;
	using std::cin;
	using std::endl;

	Vector result;
	Vector step;
	double target, step_length, direction;
	srand(time(NULL));
	cout << "input your target distance: " << endl;
	cin >> target;
	cout << "input step_length: " << endl;
	cin >> step_length;
	while (result.get_r() < target)
	{
		direction = rand() % 360 * trans;
		step.reset(step_length, direction, Vector::POLAR);
		result = result + step;
		result.polar_mode();
		cout << result << endl;
		fs << result;
	}
	return 0;
}
