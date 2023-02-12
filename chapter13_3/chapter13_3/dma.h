#pragma once
#include <iostream>
class dmaABC
{
public:
	dmaABC(const char* s = "haha", int r = 0);
	dmaABC(const dmaABC& obj);
	dmaABC& operator=(const dmaABC& obj);
	virtual ~dmaABC();
	friend std::ostream& operator<<(std::ostream& os, const dmaABC& rhd);
	virtual void View() const = 0 ;
private:
	char* label;
	int rating;
};

class baseDMA :public dmaABC
{
public:
	baseDMA(const char* s = "haha", int r = 0):dmaABC(s, r) { };
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rhd);
	void View() const;
};
