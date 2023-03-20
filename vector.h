#pragma once
////////////////////////////
//���������� ���� ���-21-1//
////////////////////////////

class Vector {

private:
	int *_num;//������
	int _numElements;//�������� �������
	int _capacity;//���� ���-�� ���������

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

	//������//

	Vector& operator=(const Vector& lv);//�������� ������������ 
	int size();//������ ������
	int empty();
	void push_back(int value);//���������� �������� � ����� �������
	void pop_back();//�������� ������ �������� �� �������
	void clear();//������� �������
	void reverse();
	int insert(int x, int i);
	void extend();
	//?
	const int& operator[](int i) const;

	int& operator[](int i);

	void print();

};