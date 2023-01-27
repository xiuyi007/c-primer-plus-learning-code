#include "chapter8_4.h"

int main() {
	using namespace chapter8;
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); //first argument is a reference,
						//allocates space to hold copy of testing, 
						//set str member of beany to point to the
						//new block, copies testing to new block
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}