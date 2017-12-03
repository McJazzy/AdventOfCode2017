#include "AdventOfCode2k17.h"
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>


template<>
void solve<Day1>(std::istream & is, std::ostream & os, bool part2) {
	std::vector<char> v{ std::istream_iterator<char>(is), std::istream_iterator<char>()}, b;
	int len = part2 ? v.size() / 2 : 1;
	std::rotate_copy(v.begin(), v.begin() + len, v.end(), std::back_inserter(b));
	std::transform(v.begin(), v.end(), b.begin(), v.begin(), [](auto l, auto r) {
		return l == r ? l - '0' : 0;
	});
	os << "part" << part2 << " " << std::accumulate(v.begin(), v.end(), 0);

	
}

