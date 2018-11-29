#pragma once
#include <iostream>

using namespace std;

namespace FIFO
{
	struct List
	{
		int x;
		List *next, *head;
	};

	class Input
	{
	public: 
		void Add(int x, List *&myList);
		void Show(List *myList);
		void Clear(List *myList);
	};
}