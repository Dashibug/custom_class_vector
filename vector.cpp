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
		cout << "Вектор пуст!" << endl;
		return 1;
	}
	else
	{
		cout << "Вектор не пуст!" << endl;
		return 0;
	}
}

int Vector::size() 
{
	return _numElements;
}

void Vector::extend()//расширение памяти, если пользов хочет больше элемен
{
	cout << "Вектор расширен!" << endl;// для теста
	_capacity = 2 * _capacity; //увеличение размера в 2 раза

	int* _1Array = new int[_capacity];//Создание нового временного массива для копирования всех элементов из старого массива

	for (int i = 0; i < _numElements; i++)//перенос элемен
	{
		_1Array[i] = _num[i];
	}
	delete[] _num;// удаление
	_num = _1Array;// Назначение старого массива новым массивом по ссылке.
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
		_num[i] = _num[_numElements - i - 1];//Присваивание текущего значения массива последним элементом
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
	cout << "Вектор очищен!" << endl;
}

void Vector::pop_back()//удаление последнего
{
	_num[_numElements - 1] = NULL;
	--_numElements;
}

int Vector::insert(int x, int i)//Эта функция вставляет новый элемент в массив по определенному индексу, что означает, что она перемещает текущий элемент и остальные элементы после него на один вперед.
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
