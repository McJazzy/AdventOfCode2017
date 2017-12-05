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
void solve<Day4>(std::istream & is, std::ostream & os, bool part2) {
	int sum = 0;
	
	for (std::string line; std::getline(is, line);) {
		std::istringstream iss{ line };
		std::vector<std::string> v{ std::istream_iterator<std::string>{iss}, {} };

		if (!part2) {
			std::set<std::string> u{ v.begin(), v.end() };
			sum += v.size() == u.size();
		}
		else {
			std::for_each(v.begin(), v.end(), [](std::string & s) {std::sort(s.begin(), s.end()); });
			std::set<std::string> u{ v.begin(), v.end() };
			sum += v.size() == u.size();
		}
	}
	os << "part" << (part2 ? "2" : "1") << " =" << sum << " ";
}