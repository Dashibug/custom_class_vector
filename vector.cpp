#include "vector.h"
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

Vector::~Vector() {
	delete[] _num;
}

int Vector::empty() {
	if (_numElements == 0) {
		cout << "������ ����!" << endl;
		return 1;
	}
	else
	{
		cout << "������ �� ����!" << endl;
		return 0;
	}
}

int Vector::size() 
{
	return _numElements;
}

void Vector::extend()//���������� ������, ���� ������� ����� ������ ������
{
	cout << "������ ��������!" << endl;// ��� �����
	_capacity = 2 * _capacity; //���������� ������� � 2 ����

	int* _1Array = new int[_capacity];//�������� ������ ���������� ������� ��� ����������� ���� ��������� �� ������� �������

	for (int i = 0; i < _numElements; i++)//������� ������
	{
		_1Array[i] = _num[i];
	}
	delete[] _num;// ��������
	_num = _1Array;// ���������� ������� ������� ����� �������� �� ������.
}

void Vector::push_back(int lhs)
{
	if (_numElements == _capacity) {
		extend();
	}
	++_numElements;
	_num[_numElements - 1] = lhs; 
	cout << _num[_numElements - 1] << endl;
}

void Vector::reverse()
{
	for (int i = 0; i < _numElements / 2; i++)
	{
		int x = _num[i];// 
		_num[i] = _num[_numElements - i - 1];//������������ �������� �������� ������� ��������� ���������
		_num[_numElements - i - 1] = x;
	}
}

void Vector::clear()
{
	for (int i = 0; i < _numElements; i++)
	{
		_num[i] = NULL;
	}
	_numElements = 0;
	cout << "������ ������!" << endl;
}

void Vector::pop_back()//�������� ����������
{
	_num[_numElements - 1] = NULL;
	--_numElements;
}

int Vector::insert(int x, int i)//��� ������� ��������� ����� ������� � ������ �� ������������� �������, ��� ��������, ��� ��� ���������� ������� ������� � ��������� �������� ����� ���� �� ���� ������.
{
	if (i >= 0 && i < _numElements)
	{
		if (_numElements == _capacity)
		{
			extend();
		}
		_numElements++;
		for (int a = i; a < _numElements; a++)
		{
			int tempy = _num[a];
			_num[a] = x;
			x = tempy;
		}
	}
	else
		return 1;
}

void Vector::print() {

	for (int i = 0; i < _numElements; i++)
	{

		cout << _num[i] << endl;
	}
}
