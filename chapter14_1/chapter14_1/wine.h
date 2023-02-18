#pragma once
#include <string>
#include <valarray>
class Wine
{
private:
	template <typename T1, typename T2> 
	class Pair
	{
	private:
		T1 a;
		T2 b;
	public:
		Pair(const T1& aval, const T2& bval) :a(aval), b(bval) {}
		Pair() {}
		T1& first();
		T2& second();
		T1 first() const { return a; }
		T2 second() const { return b; }
		void setFirst(const T1 obj) { a = obj; };
		void setSecond(const T2 obj) { b = obj; };
	};
	using ArrayInt = std::valarray<int>;
	using PairArray = Pair<ArrayInt, ArrayInt>;
	
	PairArray a;
	std::string label;
	int year;
public:
	Wine();
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);

	void GetBottles();
	const std::string& Label() const;
	int sum() const;
};


template<typename T1, typename T2>
T1& Wine::Pair<T1, T2>::first()
{
	return a;
}

template<typename T1, typename T2>
T2& Wine::Pair<T1, T2>::second()
{
	return b;
}