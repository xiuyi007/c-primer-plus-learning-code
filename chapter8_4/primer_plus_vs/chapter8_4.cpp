#include "chapter8_4.h"
#include "string"
#include "iostream"

namespace chapter8 {
	void chapter8::set(stringy& target, char* p)
	{
		char* space;
		int n = 0;
		for (int i = 0; p[i] != '\0'; i++) {
			n++;
		}
		space = new char[n + 1];
		strcpy(space, p);
		target.str = space;
		target.ct = n;
	}
	void chapter8::show(const stringy& s, int times)
	{
		while (times--) {
			std::cout << s.str << std::endl;
		}
	}
	void chapter8::show(const char* p, int times)
	{
		using namespace std;
		while (times--) {
			cout << p << endl;
		}
	}

}

