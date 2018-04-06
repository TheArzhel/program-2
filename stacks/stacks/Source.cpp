#include <iostream>
#include <stdio.h>
using namespace std;

#define SIZE (6)
class Stack
{
public:
	// Ctor. and Dtor.
	Stack() 
	{ 
		_array = new int[SIZE](); 
		_top = -1;
	}

	~Stack() 
	{
		delete[] _array;
	}
	// Modifiers

	void push(int value)
	{ 
		if (_top + 1 < SIZE)
		{
			_array[_top + 1] = value;
			_top++;
		}
		//else /*(_top+1 == SIZE)*/
		//{
		//	_top = -1;
		//	_array[_top + 1] = value;
		//}
	}
	void pop()
	{
		if (_top > -1)
		{
			_array[_top] = 0;
			_top--;
		}
	}

	// Getters
	int top() const
	{
		return _array[_top];
	}
	bool empty() const 
	{
		bool state = false;

		if (_top == -1) {
			state = true;
		}
		return state;
	}
private:
	int _top; // Current top index (-1 if empty)
	int *_array; // Dynamically allocated array

};

int main() {

	Stack ok;

	for (int i = 1; i < SIZE+1; ++i) {
		ok.push(i);
	}

	cout << "topu numberu isu " << ok.top() << endl;

	ok.pop();
	ok.pop();

	cout << "topu numberu isu " << ok.top() << endl;

	ok.pop();
	ok.pop(); 
	ok.pop();
	
	cout << " isu is empty? " << ok.empty() << endl;

	ok.pop();

	cout << " isu is empty? " << ok.empty() << endl;
	
	system("pause");
	return 0;
}