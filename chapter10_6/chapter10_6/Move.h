#pragma once
class Move
{
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);
private:
	double x;
	double y;
};
