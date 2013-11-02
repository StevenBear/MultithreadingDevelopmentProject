#include "ProjectEulerSolutions.h"


ProjectEulerSolutions::ProjectEulerSolutions()
{
}


ProjectEulerSolutions::~ProjectEulerSolutions()
{
}

void ProjectEulerSolutions::Solution1()
{
	int answer = 0;

	for (int index = 0; index < 1000; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			answer += index;
		}
	}

	std::cout << "Sum of all multiples of 3 & 5 under 1000 is " << answer << std::endl;
}

void ProjectEulerSolutions::Solution2()
{
	long long num1 = 1;
	long long num2 = 1;
	long long ans = 0;
	long long sumOfAll = 0;

	while (ans < 4000000)
	{
		ans = num1 + num2;

		if (ans % 2 == 0)
		{
			sumOfAll += ans;
		}

		num1 = num2;
		num2 = ans;
	}

	std::cout << "The sum of all even Fibonacci under 4mil is "
		<< sumOfAll << std::endl;
}

void ProjectEulerSolutions::Solution3()
{

	long long mainNumber = 600851475143;
	long long secondary = mainNumber;
	long long largest = 0;
	bool prime;
	bool divDown;

	std::vector<long long> primes;

	primes.push_back(2);

	for (int index = 3; index <= secondary; index++)
	{

		for (auto i : primes)
		{
			if (index%i == 0)
			{
				prime = false;
				break;
			}
			else
			{
				prime = true;
			}
		}

		if (prime)
		{
			if (mainNumber%index == 0)
			{
				primes.push_back(index);
				divDown = true;

				while (divDown)
				{
					divDown = false;

					for (auto i : primes)
					{
						if (secondary%i == 0)
						{
							secondary /= i;
							divDown = true;
						}
					}
				}
				
			}

		}
	}

	for (auto i : primes)
	{
		largest = std::max(largest, i);
	}

	std::cout << "The largest prime factor of 600851475143 is " << largest << std::endl;

}

void ProjectEulerSolutions::Solution4()
{
	int num1;
	int num2;
	int ans;
	int biggest = 0;
	std::string forwardNumber;
	std::string reverseNumber;

	for (num1 = 999; num1 > 99; num1--)
	{
		for (num2 = 999; num2 > 99; num2--)
		{
			ans = num1 * num2;

			if (ans > biggest)
			{
				forwardNumber = std::to_string(ans);
				reverseNumber = forwardNumber;
				std::reverse(reverseNumber.begin(), reverseNumber.end());

				if (forwardNumber == reverseNumber)
				{
					biggest = std::max(biggest, ans);
				}
			}
		}
	}

	std::cout << "Biggest product palindrome of two 3 digit numbers is " << biggest << std::endl;
}

void ProjectEulerSolutions::Solution5()
{
	std::vector<int> primes{ 2, 3, 5, 7, 11, 13, 17, 19 };

	long int answer = 20;
	bool checking = true;

	while (checking)
	{
		answer++;
		checking = false;

		for (auto i : primes)
		{
			if (answer%i != 0)
			{
				checking = true;
				break;
			}
		}
	}

	std::cout << "Lowest divisble without remainder by all 1-20 is: " << answer << std::endl;
}

void ProjectEulerSolutions::Solution6()
{
	uint64_t sumOfSquares = 0;
	uint64_t squaredOfSum = 0;
	uint64_t ans;

	for (int index = 1; index < 101; index++)
	{
		sumOfSquares += index * index;
		squaredOfSum += index;
	}

	squaredOfSum *= squaredOfSum;

	ans = squaredOfSum - sumOfSquares;

	std::cout << "Sum squared minus summed squares equals " << ans << std::endl;
}

void ProjectEulerSolutions::Solution7()
{
	uint64_t num = 2;
	uint64_t index = 1;
	bool prime;

	std::vector<uint64_t> primes;

	primes.push_back(2);

	while (index != 10001)
	{
		num++;

		for (auto i : primes)
		{
			if (num%i == 0)
			{
				prime = false;
				break;
			}
			else
			{
				prime = true;
			}
		}

		if (prime)
		{
			primes.push_back(num);
			index++;
		}
	}

	std::cout << "The 10001st prime is " << num << std::endl;
}

/*
Number for Solution 8

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

*/

void ProjectEulerSolutions::Solution8()
{
	std::string theNumber = "73167176531330624919225119674426574742355349194934"
	"96983520312774506326239578318016984801869478851843"
	"85861560789112949495459501737958331952853208805511"
	"12540698747158523863050715693290963295227443043557"
	"66896648950445244523161731856403098711121722383113"
	"62229893423380308135336276614282806444486645238749"
	"30358907296290491560440772390713810515859307960866"
	"70172427121883998797908792274921901699720888093776"
	"65727333001053367881220235421809751254540594752243"
	"52584907711670556013604839586446706324415722155397"
	"53697817977846174064955149290862569321978468622482"
	"83972241375657056057490261407972968652414535100474"
	"82166370484403199890008895243450658541227588666881"
	"16427171479924442928230863465674813919123162824586"
	"17866458359124566529476545682848912883142607690042"
	"24219022671055626321111109370544217506941658960408"
	"07198403850962455444362981230987879927244284909188"
	"84580156166097919133875499200524063689912560717606"
	"05886116467109405077541002256983155200055935729725"
	"71636269561882670428252483600823257530420752963450";


	std::deque<uint32_t> cycle;
	uint32_t temp;
	uint32_t sum;
	uint32_t largest = 0;
	uint32_t cycleQuant = 0;
	uint32_t cycleMax = 5;

	for (auto i : theNumber)
	{
		if (cycleQuant == cycleMax)
		{
			cycle.pop_front();
		}

		temp = atoi(&i);

		cycle.push_back(temp);

		if (cycleQuant != cycleMax)
		{
			cycleQuant++;
		}
		else
		{
			sum = 0;

			for (auto j : cycle)
			{
				sum += j;
			}

			largest = std::max(largest, sum);
		}
	}

	std::cout << "The answer is " << largest << std::endl;

}

void ProjectEulerSolutions::Solution9()
{
	uint64_t product;
	uint64_t a = 0;
	uint64_t b = 0;
	uint64_t c = 0;
	bool solved = false;

	while (!solved && a < 1000)
	{
		a++;
		b = a;
				
		for (;;)
		{
			b++;
			c = b;

			for (;;)
			{
				c++;

				if (a + b + c == 1000)
				{
					if (((a*a) + (b*b)) == (c*c))
					{
						solved = true;
					}

					break;
				}
				else if (a + b + c > 1000)
				{
					break;
				}
			}

			if (b > 999 - a || solved)
			{
				break;
			}
		}

	}

	if (solved)
	{
		product = a * b * c;
		std::cout << "Solved: " << product << std::endl;
	}
	else
	{
		std::cout << "Not solved" << std::endl;
	}


}

void ProjectEulerSolutions::Solution10()
{
	uint64_t num = 3;
	uint64_t sum = 2;
	bool prime;

	std::vector<uint64_t> primes;

	primes.push_back(2);

	while (num <= 1999999)
	{
		
		for (auto i : primes)
		{
			if (num%i == 0)
			{
				prime = false;
				break;
			}
			else
			{
				prime = true;
			}
		}

		if (prime)
		{
			primes.push_back(num);
			sum += num;
		}
		
		num += 2;
	}

	std::cout << "Sum of all primes under 2000000 is " << sum << std::endl;
}
