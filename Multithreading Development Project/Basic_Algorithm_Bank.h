#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <cstdint>

template<typename T>
class Basic_Algorithm_Bank
{
public:

	void Container_Divisible_Check(T& containerToCheck, const uint64_t& divider)
	{
		if (std::all_of(containerToCheck.begin(), containerToCheck.end(),
			[&divider](uint64_t i){if (i % divider == 0)return true;
			else return false; }))
			{
			std::cout << "Whole container divisible by " << divider << std::endl;
		}
		else
		{
			std::cout << "Element present in container not divisible by " << divider << std::endl;
		}
	}

	void Permutation_Display(T& container1ToCheck, T& container2ToCheck)
	{
		if (std::is_permutation(container1ToCheck.begin(), container1ToCheck.end(), container2ToCheck.begin()))
		{
			std::cout << "Container 1 elements are matched by container 2" << std::endl;
		}
		else
		{
			std::cout << "Container 1 elements are not matched by container 2" << std::endl;
		}

		if (std::is_permutation(container2ToCheck.begin(), container2ToCheck.end(), container1ToCheck.begin()))
		{
			std::cout << "Container 2 elements are matched by container 1" << std::endl;
		}
		else
		{
			std::cout << "Container 2 elements are not matched by container 1" << std::endl;
		}
	}

};

