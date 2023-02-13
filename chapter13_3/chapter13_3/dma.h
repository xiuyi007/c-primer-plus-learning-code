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

class lacksDMA :public dmaABC
{
public:
	lacksDMA(const char* s1 = "null", const char* s2 = "haha", int r = 0);
	lacksDMA(const lacksDMA& ojb);
	lacksDMA& operator=(const lacksDMA& obj);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rhd);
	void View() const;

private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
};

class hasDMA :public dmaABC
{
public:
	hasDMA(const char* s1 = "null", const char* s2 = "haha", int r = 0);
	~hasDMA();
	hasDMA(const hasDMA& obj);
	hasDMA& operator=(const hasDMA& rhd);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rhd);
	void View() const;
private:
	char* style;
};