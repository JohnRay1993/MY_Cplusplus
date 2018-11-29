#pragma once
#include "Input.h"

namespace FIFO
{
	void Input::Add(int x, List *& myList)
	{
		List *temp = new List;                              //Выделяем память для нового элемента
		temp->x = x;                                        //Записываем в поле x принимаемый в функцию элемент x
		temp->next = myList->head;                          //Указываем, что следующий элемент это предыдущий
		myList->head = temp;                                //Сдвигаем голову на позицию вперед
	}
	void Input::Show(List *myList)
	{
		List *temp = myList->head;                          //Объявляем указатель и Указываем ему, что его позиция в голове стека
		while (temp != NULL)                                //выходим при встрече с пустым полем
		{
			cout << temp->x << " ";                         //Выводим на экран элемент стека
			temp = temp->next;                              //Переходим к следующему элементу
		}
	}
	void Input::Clear(List *myList)
	{
		while (myList->head != NULL)                        //Пока по адресу не пусто
		{
			List *temp = myList->head->next;                    //Временная переменная для хранения адреса следующего элемента
			delete myList->head;                                //Освобождаем адрес обозначающий начало
			myList->head = temp;                                //Меняем адрес на следующий
		}
	}
}