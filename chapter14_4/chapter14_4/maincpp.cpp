#include "BadDude.h"
using namespace std;
int main()
{
	Person* obj_list[3];
	obj_list[0] = new PokerPlayer();
	obj_list[1] = new Gunslinger();
	obj_list[2] = new BadDude();
	for (int i = 0; i < 3; i++)
	{
		obj_list[i]->show();
	}
	for (int i = 0; i < 3; i++)
	{
		delete obj_list[i];
	}
	return 0;
}