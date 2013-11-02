#pragma once
#include <thread>
#include <mutex>
#include <future>
#include <iostream>
#include <chrono>
#include <vector>
#include <cstdint>
//#include <boost\asio.hpp>
#include "Threadsafe_Queue.h"
#include "Threadsafe_Stack.h"
#include "HighResStopwatch.h"
#include "ProjectEulerSolutions.h"

void main()
{
	bool wait;
	ProjectEulerSolutions TrainingClass;

	TrainingClass.Solution10();

	wait = true;
}