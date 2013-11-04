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
	uint64_t target = 2000000;
	uint64_t squareLimit = sqrt(target);
	uint64_t sum = 2;
	uint64_t current = 3;
	std::vector<uint64_t> primes;
	bool prime;

	primes.push_back(2);

	while (current <= target)
	{
		prime = true;

		for (auto i : primes)
		{
			if (current%i == 0 || i > squareLimit)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			if (current < squareLimit)
			{
				primes.push_back(current);
			}

			sum += current;
		}

		current += 2;
	}

	std::cout << "Answer is " << sum << std::endl;
}

/*
08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70
67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21
24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72
21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95
78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48
*/
void ProjectEulerSolutions::Solution11()
{
	std::array<std::array<uint64_t, 20>, 20> grid;


	std::array<uint64_t, 20> grid0 = { 8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8 };
	std::array<uint64_t, 20> grid1 = { 49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0 };
	std::array<uint64_t, 20> grid2 = { 81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65 };
	std::array<uint64_t, 20> grid3 = { 52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91 };
	std::array<uint64_t, 20> grid4 = { 22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80 };
	std::array<uint64_t, 20> grid5 = { 24, 47, 32, 60, 99, 03, 45, 02, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50 };
	std::array<uint64_t, 20> grid6 = { 32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70 };
	std::array<uint64_t, 20> grid7 = { 67, 26, 20, 68, 02, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21 };
	std::array<uint64_t, 20> grid8 = { 24, 55, 58, 05, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72 };
	std::array<uint64_t, 20> grid9 = { 21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95 };
	std::array<uint64_t, 20> grid10 = { 78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 04, 62, 16, 14, 9, 53, 56, 92 };
	std::array<uint64_t, 20> grid11 = { 16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 00, 17, 54, 24, 36, 29, 85, 57 };
	std::array<uint64_t, 20> grid12 = { 86, 56, 00, 48, 35, 71, 89, 7, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58 };
	std::array<uint64_t, 20> grid13 = { 19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40 };
	std::array<uint64_t, 20> grid14 = { 4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66 };
	std::array<uint64_t, 20> grid15 = { 88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69 };
	std::array<uint64_t, 20> grid16 = { 4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36 };
	std::array<uint64_t, 20> grid17 = { 20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16 };
	std::array<uint64_t, 20> grid18 = { 20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54 };
	std::array<uint64_t, 20> grid19 = { 1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48 };

	grid[0] = grid0; grid[1] = grid1; grid[2] = grid2; grid[3] = grid3; grid[4] = grid4; grid[5] = grid5; grid[6] = grid6;
	grid[7] = grid7; grid[8] = grid8; grid[9] = grid9; grid[10] = grid10; grid[11] = grid11; grid[12] = grid12; grid[13] = grid13;
	grid[14] = grid14; grid[15] = grid15; grid[16] = grid16; grid[17] = grid17; grid[18] = grid18; grid[19] = grid19;

	uint64_t maximum = 0;
	uint64_t product = 0;
	
	for (int down = 0; down < 20; down++)
	{
		for (int across = 0; across < 20; across++)
		{
			if (across < 17)//across product check
			{
				product = grid[down][across] * grid[down][across + 1] * grid[down][across + 2] * grid[down][across + 3];

				maximum = std::max(maximum, product);
			}

			if (down < 17)//down
			{
				product = grid[down][across] * grid[down + 1][across] * grid[down + 2][across] * grid[down + 3][across];

				maximum = std::max(maximum, product);
			}

			if (across < 17 && down < 17)//down & right
			{
				product = grid[down][across] * grid[down + 1][across + 1] * grid[down + 2][across + 2] * grid[down + 3][across + 3];

				maximum = std::max(maximum, product);
			}

			if (across < 17 && down < 17)//down & right
			{
				product = grid[down][across] * grid[down + 1][across + 1] * grid[down + 2][across + 2] * grid[down + 3][across + 3];

				maximum = std::max(maximum, product);
			}

			if (across < 17 && down > 2)//up & right
			{
				product = grid[down][across] * grid[down - 1][across + 1] * grid[down - 2][across + 2] * grid[down - 3][across + 3];

				maximum = std::max(maximum, product);
			}
		}
	}

	std::cout << "Maximum is " << maximum << std::endl;

}