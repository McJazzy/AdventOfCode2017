#include "AdventOfCode2k17.h"
#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
	//solve<Day2>(std::ifstream{ "in2.txt" }, std::cout, false);
	//solve<Day2>(std::ifstream{ "in2.txt" }, std::cout, true);
	solve<Day3>(std::istringstream{ "368078" }, std::cout, true);

	std::cin.get();
    return 0;
}

