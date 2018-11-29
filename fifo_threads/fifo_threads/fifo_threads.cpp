#include <iostream>
//#include "stdio.h"
//
using namespace std;

//#include "Input.h"

//using namespace FIFO;


struct FIFO
{
	int x;
	int size;
	FIFO *next, *head, *tail;
	void Add(int val);

	FIFO()
	{
		next = head = tail = NULL;
	}
};

void FIFO::Add(int val)
{
	static int count = 0;
	FIFO *temp = new FIFO;
	next = temp->head;
	temp->x = val;
	if (head != NULL)
	{
		tail->next = temp;
		tail = temp;
	}
	else
		head = tail = temp;
	count++;

	tail->next = head;
	size = count;

	//out
	cout << head->x << " " << head->size << endl;
}

int main()
{
	FIFO f;

	for (int i = 1; i < 10; i++)
		f.Add(i);






	//Input input;

	//List *MyList = new List; //Выделяем память для стека
	//cout << MyList << endl;
	//MyList->head = NULL; //Во избежание ошибок инициализируем первый элемент

	//cout << "add" << endl;
	//for (int i = 0; i < 10; i++) input.Add(i + 1, MyList); //Заносим данные в стек
	//cout << "show" << endl;
	//input.Show(MyList); //Выводим стек на экран
	//cout << endl;
	//cout << "clear" << endl;
	//input.Clear(MyList); //Очищаем память.
	//delete MyList->head;
	//delete MyList;

	getchar();
}