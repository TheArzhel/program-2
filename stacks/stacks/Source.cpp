#include <iostream>
#include <stdio.h>
using namespace std;

#define SIZE (6)
//class Stack
//{
//public:
//	// Ctor. and Dtor.
//	Stack() 
//	{ 
//		_array = new int[SIZE](); 
//		_top = -1;
//	}
//
//	~Stack() 
//	{
//		delete[] _array;
//	}
//	// Modifiers
//
//	void push(int value)
//	{ 
//		if (_top + 1 < SIZE)
//		{
//			_array[_top + 1] = value;
//			_top++;
//		}
//		//else /*(_top+1 == SIZE)*/
//		//{
//		//	_top = -1;
//		//	_array[_top + 1] = value;
//		//}
//	}
//	void pop()
//	{
//		if (_top > -1)
//		{
//			_array[_top] = 0;
//			_top--;
//		}
//	}
//
//	// Getters
//	int top() const
//	{
//		return _array[_top];
//	}
//	bool empty() const 
//	{
//		bool state = false;
//
//		if (_top == -1) {
//			state = true;
//		}
//		return state;
//	}
//private:
//	int _top; // Current top index (-1 if empty)
//	int *_array; // Dynamically allocated array
//
//};
class Queue {
public:  // Ctor. and Dtor.  
	Queue() 
	{
		_array = new int[SIZE];
		_front = -1;
		_back = -1;

	}
	~Queue() 
	{
		delete[] _array;	
	}
	// Modifiers  
	void enqueue(int value) 
	{
		if (_back - _front != SIZE) 
		{//not full 
			_array[_back + 1] = value;
			_back++;

			if (_back == SIZE - 1 /*&& not full*/)
			{
				_back = -1;
			}
		}
	}
	void  dequeue() 
	{
		if (_back != _front) // vacio
		{
			_array[_front + 1] = 0;
			_front++;

			if (_back == SIZE - 1)
			{
				_back = -1;
			}
			
		}
	}
		 // Getters  
	int size() const 
	{
		int count = _back - _front;
		if (_back == _front)
			count = 0;
		return  count;
	}
	bool empty() const 
	{
		bool emp= false;
		if (_back == _front)
			emp = true;
		return true;
	}
private:  int _front; // Index to the front (-1 if empty)  
		  int _back; // Index to the back (-1 if empty)  
		  int *_array; // Dynamically allocated array 
};

int main() {

	/*Stack ok;

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
	*/

	Queue ok;

	for (int i = 1; i < SIZE+1; ++i) {
	ok.enqueue(i);
	}

	cout << "size is " << ok.size() << endl;

	ok.dequeue();
	ok.dequeue();

	cout << "size is " << ok.size() << endl;

	ok.dequeue();
	ok.dequeue();
	ok.dequeue();

	cout << " isu is empty? " << ok.empty() << endl;

	ok.dequeue();

	cout << " isu is empty? " << ok.empty() << endl;
	
	system("pause");
	return 0;
}