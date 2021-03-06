#pragma once
#include <istream>
#include <ostream>

enum Day {
	Day1 = 1,
	Day2,
	Day3,
	Day4,
	Day5
};

template<Day DAY>
void solve(std::istream & is, std::ostream & os, bool part2 = false);

