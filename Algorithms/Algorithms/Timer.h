#pragma once

#include "iostream"
#include "Windows.h"

class cTimer
{
public:
	cTimer()
	{
		::QueryPerformanceFrequency(&_freq);
	};

	void  start_timer()
	{
		::QueryPerformanceCounter(&_start);
	};
	double   elapsed_time() //ms
	{

		LARGE_INTEGER stop;
		::QueryPerformanceCounter(&stop);
		return double(stop.QuadPart -
			_start.QuadPart)*1000.0 /
			double(_freq.QuadPart);
	};

	static double now() //sec
	{
		LARGE_INTEGER stop;
		::QueryPerformanceCounter(&stop);
		LARGE_INTEGER freq;
		::QueryPerformanceFrequency(&freq);
		return double(stop.QuadPart) / double(freq.QuadPart);
	};

private:
	LARGE_INTEGER _start;
	LARGE_INTEGER _freq;

};