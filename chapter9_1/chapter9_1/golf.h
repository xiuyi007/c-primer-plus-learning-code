#pragma once
#ifndef GOLF_H
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);

void handicap(golf& g, int hc);

void showgolf(const golf& g);
#endif // !GOLF_H
