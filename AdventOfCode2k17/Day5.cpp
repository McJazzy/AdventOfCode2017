#include "AdventOfCode2k17.h"
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>
#include <complex>
#include <set>
#include <chrono>
template<>
void solve<Day5>(std::istream & is, std::ostream & os, bool part2) {
	std::vector<int> v{ std::istream_iterator<int>{is},{} };	
	int steps{ 0 };	
	for (auto it{ v.begin() }; it >= v.begin() && it < v.end(); ++steps) {
		auto old = it;
		it += *it;
		*old += part2 && *old >= 3 ? -1 : 1;		
	}	
	os << "part" << (part2 ? "2" : "1") << " =" << steps << " ";
}