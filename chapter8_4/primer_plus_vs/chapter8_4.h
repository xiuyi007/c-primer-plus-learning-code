#pragma once
#ifndef CHAPTER_8_4_H
namespace chapter8 {
	struct stringy {
		char* str;
		int ct;
		};
	void set(stringy& target, char* p);
	void show(const stringy& target, int times = 1);
	void show(const char* p, int times = 1);
	
	}
#endif // !CHAPTER_8_4_H
