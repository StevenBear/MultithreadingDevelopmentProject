#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdint>
#include <deque>
#include <mutex>
#include "Threadsafe_Queue.h"

class ProjectEulerSolutions
{
public:
	ProjectEulerSolutions();
	~ProjectEulerSolutions();


	void Solution1();//Sum of all multiples of 3 & 5 under 1000
	void Solution2();//Sum of all even fibbonachi numbers under 4million
	void Solution3();//Largest prime factor of 600851475143
	void Solution4();//Largest palindrome of the product of two 3-digit numbers
	void Solution5();//finding lowest number divisible without remainder for all numbers 1-20
	void Solution6();//finding the differences of the square sum and sum squared of 1st 100 natural numbers
	void Solution7();//finding 10001st prime number
	void Solution8();//Greatest product of 5 numbers in the 1000 digit number (in function)
	void Solution9();//find only pythagorean triple where a+b+c = 1000 then find its product (a*b*c)
	void Solution10();//Sum all primes under 2 million
	void Solution10Threaded();
	void Solution10ThreadChecker();
};

