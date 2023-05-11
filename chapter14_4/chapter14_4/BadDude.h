#pragma once
#include "Gunslinger.h"
#include "PokerPlayer.h"
class BadDude :public Gunslinger, public PokerPlayer
{
public:
	BadDude() : Gunslinger(), PokerPlayer(), Person() { }
	double Gdraw() const { return 2; }
	int Cdraw() const { return PokerPlayer::Draw() + 1; }
	void show() const { Person::show(); show_sign(); }
};
