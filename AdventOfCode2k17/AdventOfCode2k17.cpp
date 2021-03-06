#include "AdventOfCode2k17.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>

int main()
{
	//solve<Day5>(std::istringstream{ "0\n3\n0\n1\n-3" }, std::cout, false);
	//solve<Day5>(std::istringstream{ "0\n3\n0\n1\n-3" }, std::cout, true);	
	//solve<Day5>(std::ifstream{ "in5.txt" }, std::cout, false);
	auto start = std::chrono::high_resolution_clock::now();
	solve<Day5>(std::ifstream{ "in5.txt" }, std::cout, true);
	auto end = std::chrono::high_resolution_clock::now();

	std::cout << "took: " << std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count() << "ms";

	std::cin.get();
    return 0;
}

