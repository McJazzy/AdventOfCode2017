#include "AdventOfCode2k17.h"
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <sstream>
#include <string>


template<>
void solve<Day2>(std::istream & is, std::ostream & os, bool part2) {	
	int sum = 0;
	for (std::string line; std::getline(is, line);) {
		std::istringstream iss{ line };
		const std::vector<int> v{std::istream_iterator<int>{iss}, {}};
		if (!part2) {
			auto res = std::minmax_element(v.begin(), v.end());
			sum += (*res.second - *res.first);
		}
		else {
			for (const auto l : v) {
				for (const auto r : v) {
					if (l != r && l % r == 0)
						sum += l / r;
				}
			}
		}
	}
	os << "part" << (part2 ? "2" : "1") <<  "  " << sum;	
}