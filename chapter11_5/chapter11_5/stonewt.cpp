#include "stonewt.h"
#include <iostream>
Stonewt::Stonewt(double lbs, m_enum m_status)
{
	status = m_status;
	stone = int(lbs);
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, m_enum m_status)
{
	status = m_status;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
	status = STONE;
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_lbs() const
{
	std::cout << pounds << " pounds \n";
}

void Stonewt::show_stn() const
{
	std::cout << stone << " stone, " << pds_left << " pounds \n";
}

std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt)
{
	if (stonewt.status == Stonewt::STONE)
	{
		std::cout << "status: stone" << std::endl;
		std::cout << "stonewt's stone " << stonewt.stone << std::endl;
	}
	else if (stonewt.status == Stonewt::PDS_LEFT)
	{
		std::cout << "status: pds_left" << std::endl;
		std::cout << "stonewt's pds_left " << stonewt.pds_left << std::endl;
	}
	else
	{
		std::cout << "status: pounds" << std::endl;
		std::cout << "stonewt's pounds " << stonewt.pounds << std::endl;
	}
	return os;


}
