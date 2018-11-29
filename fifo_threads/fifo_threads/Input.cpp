#pragma once
#include "Input.h"

namespace FIFO
{
	void Input::Add(int x, List *& myList)
	{
		List *temp = new List;                              //�������� ������ ��� ������ ��������
		temp->x = x;                                        //���������� � ���� x ����������� � ������� ������� x
		temp->next = myList->head;                          //���������, ��� ��������� ������� ��� ����������
		myList->head = temp;                                //�������� ������ �� ������� ������
	}
	void Input::Show(List *myList)
	{
		List *temp = myList->head;                          //��������� ��������� � ��������� ���, ��� ��� ������� � ������ �����
		while (temp != NULL)                                //������� ��� ������� � ������ �����
		{
			cout << temp->x << " ";                         //������� �� ����� ������� �����
			temp = temp->next;                              //��������� � ���������� ��������
		}
	}
	void Input::Clear(List *myList)
	{
		while (myList->head != NULL)                        //���� �� ������ �� �����
		{
			List *temp = myList->head->next;                    //��������� ���������� ��� �������� ������ ���������� ��������
			delete myList->head;                                //����������� ����� ������������ ������
			myList->head = temp;                                //������ ����� �� ���������
		}
	}
}