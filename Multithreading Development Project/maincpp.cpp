#pragma once
#include <thread>
#include <mutex>
#include <future>
#include <iostream>
#include <chrono>
#include <vector>
#include <cstdint>
#include <array>
#include <string>
//#include <boost\asio.hpp>
//#include "Threadsafe_Queue.h"
//#include "Threadsafe_Stack.h"
//#include "HighResStopwatch.h"
//#include "ProjectEulerSolutions.h"
#include "Basic_Algorithm_Bank.h"

void main()
{
	bool wait;
	std::vector<uint64_t> exampleContainer1;
	std::vector<uint64_t> exampleContainer2;
	std::vector<uint64_t> exampleContainer3;
	std::vector<uint64_t> exampleContainer4;

	exampleContainer1.push_back(3);
	exampleContainer1.push_back(9);
	exampleContainer1.push_back(15);
	exampleContainer1.push_back(21);
	exampleContainer1.push_back(24);

	exampleContainer2.push_back(15);
	exampleContainer2.push_back(9);
	exampleContainer2.push_back(21);
	exampleContainer2.push_back(3);
	exampleContainer2.push_back(24);

	exampleContainer3.push_back(24);
	exampleContainer3.push_back(9);
	exampleContainer3.push_back(15);
	exampleContainer3.push_back(21);
	exampleContainer3.push_back(24);

	exampleContainer4.push_back(24);
	exampleContainer4.push_back(9);
	exampleContainer4.push_back(15);
	exampleContainer4.push_back(21);
	exampleContainer4.push_back(3);
	exampleContainer4.push_back(6);


	//ProjectEulerSolutions EulerClass;
	Basic_Algorithm_Bank<std::vector<uint64_t>> AlgoClass;

	std::cout << "Divisor checks" << std::endl;

	AlgoClass.Container_Divisible_Check(exampleContainer1, 2);
	AlgoClass.Container_Divisible_Check(exampleContainer1, 3);

	std::string st1 = "africa";
	std::string st2 = "rifcaa";
	std::string st3 = "Africa";
	std::string st4 = "afr";
	std::string st5 = "african";


	Basic_Algorithm_Bank<std::string> AlgoClass2;

	std::cout << "String permutation checks" << std::endl;
	AlgoClass2.Permutation_Display(st1, st2);
	AlgoClass2.Permutation_Display(st1, st3);
	AlgoClass2.Permutation_Display(st1, st4);
	AlgoClass2.Permutation_Display(st1, st5);


	std::cout << "Array permutation checks" << std::endl;
	AlgoClass.Permutation_Display(exampleContainer1, exampleContainer2);
	AlgoClass.Permutation_Display(exampleContainer1, exampleContainer3);
	AlgoClass.Permutation_Display(exampleContainer1, exampleContainer4);



	//EulerClass.Solution11();
	

	wait = true;
}