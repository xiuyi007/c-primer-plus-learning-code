#pragma once
#include <iostream>
class Stonewt
{
public:
	enum m_enum { Lbs_per_stn = 14, STONE, PDS_LEFT, POUNDS };
	Stonewt(double lbs, m_enum m_status = STONE);
	Stonewt(int stn, double lbs, m_enum m_status = STONE);
	Stonewt();
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;

	friend std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt);
	//重载+/-/* 与前面的题目类似，偷懒不写了。
private:
	int stone;
	double pds_left;
	double pounds;
	int status;
};
