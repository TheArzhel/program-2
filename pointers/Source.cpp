#include <stdio.h>
#include <iostream>
using namespace std;



//int main() { example 1
//	int arr1[10];
//	for (int i = 0; i < 10; i++) {
//		arr1[i] = (int)&arr1[i];
//	}
//	system("pause)");
//	return 0;
//}

//example 2
//	void addval(int val1, int val2, int* result) {
//		*result = val1 + val2;
//	}
//
//	int main() {
//
//		int val1, val2, result;
//		cin >> val1;
//		cout << endl;
//		cin >> val2;
//		cout << endl;
//		int* p = &result;
//
//		addval(val1, val2, p);
//
//
//		cout << result << endl;
//
//		system("pause");
//
//		return 0;
//	}

////example 3
//
//void reverse (int* p, int size){
//	for (int i = size - 1; i >= 0; --i) {
//		cout << *(p + i) << endl;
//	}
//}
//
//int main() {
//	
//	int arr[10];
//	int* p = arr;
//
//	for (int i = 0; i < 10; ++i) {
//		*(p+i)= i+1;
//	}
//
//	reverse(p, 10);
//	
//	system("pause");
//	return 0;
//}

//example 4
int main() {
	int* p = (int*)malloc(20 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		cout << p << endl;
	}



	system("pause");
	return 0;
}
