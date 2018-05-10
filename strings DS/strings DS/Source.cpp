#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

	class String {
	public:
		// Constructors and destructor
		String() : _str(nullptr), _size(0) {}
		String(const char *s)
		{
			char letter;
			letter = s[0];
			int counter = 0;
			for (int i = 1; letter != '\0'; ++i)
			{
				letter = s[i];
				counter++;
			}
			_str = new char[counter+1];
			strcpy(_str, s);
			_size = counter;
		}
		String(const String &s)
		{
			_str = new char[s._size];
			_size = s._size;
			strcpy(_str, s._str);
		}
		~String() 
		{
			delete[] _str;
		}
		// Methods
		bool empty() const
		{
			bool emp = false;
			if (_size == 0)
				emp = true;
		
			return emp;
		}
		int size() const 
		{
			return _size;
		}
		void clear() 
		{
			delete[] _str;
			_size = 0;
		}
		const char* ptr() const 
		{
			return _str;

		}
		// Operators
		void operator=(const String &) 
		{
		
		}// to assign
		void operator+=(const String &); // to concat
		bool operator==(const String &) const; // to compare
		bool operator!=(const String &) const; // to compare
	private:
		char *_str; // Pointer to the array of chars
		int _size; // Size of the string
	};

	system("pause");
	return 0;
}