#pragma once
////////////////////////////
//Цыбикжапов Даши БПМ-21-1//
////////////////////////////

class Vector {

private:
	int *_num;//массив
	int _numElements;//элементы массива
	int _capacity;//макс кол-во элементов

public:
	Vector() 
	{
		_numElements = 0;
		_capacity = 10;
		_num = new int[_capacity];
	}
	Vector(int lhs) 
	{
		_numElements = 0;
		_capacity = lhs;
		_num = new int[_capacity];
	}
	~Vector();

	//методы//

	Vector& operator=(const Vector& lv);//оператор присваивания 
	int size();//размер вектор
	int empty();
	void push_back(int value);//добавление элемента в конец вектора
	void pop_back();//удаление послед элемента из вектора
	void clear();//очистка вектора
	void reverse();
	int insert(int x, int i);
	void extend();
	//?
	const int& operator[](int i) const;

	int& operator[](int i);

	void print();

};