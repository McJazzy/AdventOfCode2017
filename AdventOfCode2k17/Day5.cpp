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

template<>
void solve<Day5>(std::istream & is, std::ostream & os, bool part2) {
	std::vector<int> v{ std::istream_iterator<int>{is},{} };	
	int steps{ 0 };
	for(int idx=0;idx >= 0 && idx < v.size(); ++steps) {
		int new_idx = idx + v[idx];		
		v[idx] += part2 && v[idx] >= 3 ? -1 : 1;
		idx = new_idx;
	}
	os << "part" << (part2 ? "2" : "1") << " =" << steps << " ";
}