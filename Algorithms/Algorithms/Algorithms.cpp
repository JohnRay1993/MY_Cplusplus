// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <queue>
#include <iterator> // заголовочный файл итераторов
#include <algorithm> // подключаем заголовок с алгоритмами STL

#include "Timer.h"

using namespace std;

int main()
{
	cTimer timer;
	//timer.start_timer();
	//for (int i = 0; i < 10000; i++)
	//{
	//	//cout << timer.now() << " | " << timer.elapsed_time() << endl;
	//	system("cls");
	//	cout << timer.now();
	//}

	//int a[999999];
	//vector<int> a(100000000);

	//int i = 0;
	//timer.start_timer();
	//for (i = 0; i < a.size(); i++)
	//{
	//	a[i] = rand();
	//	//a[i].push_back(rand());
	//	//cout << a[i] << " ";
	//}
	////cout << endl << endl << endl << i;
	////cout << timer.elapsed_time() << endl << sizeof(&a) << endl << a.size();
	////copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	//cout << timer.elapsed_time() << endl;
	//sort(a.begin(), a.end());
	//cout << timer.elapsed_time() << endl;

	//cout << endl;




	//vector<int> array1; // создаем пустой вектор
	//// добавляем в конец вектора array1 элементы 4, 3, 1
	//array1.insert(array1.end(), 4);
	//array1.insert(array1.end(), 3);
	//array1.insert(array1.end(), 1);
	//// вывод на экран элементов вектора
	//copy(array1.begin(),   // итератор начала массива
	//	array1.end(),     // итератор конца массива
	//	ostream_iterator<int>(cout, " ")   //итератор потока вывода
	//);



	//int a[100];
	//for (int i = 0; i < size(a); i++)
	//{
	//	a[i] = rand();
	//	while (a[i] == 0)
	//		a[i] = rand();
	//}
	//int c = 1;
	//int temp;

	//timer.start_timer();
	//for (int i = 0; i < size(a); i++)
	//{
	//	c += a[i];
	//}
	//cout << c << " " << timer.elapsed_time() << endl;

	//c = 1;
	//timer.start_timer();
	//for (int i = 0; i < size(a)/2; i++)
	//{
	//	c += a[i] + a[size(a) - i - 1];
	//}
	//cout << c << " " << timer.elapsed_time() << endl;


	/*vector<int> a(100);
	int i;

	for (i = 0; i < size(a); i++)
		a[i] = i;// rand();

	cout << "Start" << endl;
	timer.start_timer();
	for (i = 0; i < size(a); i++)
	{
		if (i == 0)
		{
			if (a[i] >= a[i + 1])
				break;
		}
		if (i > 0 && i < size(a) - 1)
		{
			if (a[i - 1] <= a[i] && a[i] >= a[i + 1])
				break;
		}
		if (i == size(a) - 1)
		{
			if (a[i - 1] <= a[i])
				break;
		}
	}
	cout << a[i] << " " << timer.elapsed_time() << endl;


	vector<int> left(50), right(50);
	cout << "Start 2" << endl;
	for (i = 0; i < a.size() / 2; i++)
	{
		left[i] = a[i];
		right[i] = a[i + 50];
	}
	*/


	int i = 0;

	/*double a[1000][2];

	//timer.start_timer();
	for (i = 0; i < size(a); i++)
	{
		a[i][0] = rand();
		a[i][1] = rand();
	}

	//cout << timer.elapsed_time() << endl;


	vector<double> a2(1000, 2);

	//timer.start_timer();
	for (i = 0; i < a2.size(); i++)
	{
		a2[i, 0] = rand();
		a2[i, 1] = rand();
	}
	*/
	//cout << timer.elapsed_time() << endl;

	/*vector<double> p, b;
	int c = 100;
	while (--c > 0)
	{
		timer.start_timer();
		for (i = 0; i < 1000; i++)
		{
			p.push_back(rand() / 3.141595);
			b.push_back(rand() / 3.141595);
		}

		cout << timer.elapsed_time() << endl;








		p.clear();
		b.clear();
	}*/

	/*queue<double> a;
	timer.start_timer();
	for (i = 0; i < 1000; i++)
	{
		a.push(i);
	}
	for (i = 0; i < 3000; i++)
	{
		//cout << a.front() << endl;
		if (!a.empty())
		{
			cout << a.front() << endl;
			a.pop();
		}
	}
	cout << timer.elapsed_time() << endl;*/

	/*timer.start_timer();
	for (i = 0; i < 1000; i++)
	{
		a.push(i);
		a.pop();
	}
	cout << timer.elapsed_time() << endl;*/


	for (i = 0; i < 2; i++)
	{
		cout << i << endl;
	}

	getchar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
