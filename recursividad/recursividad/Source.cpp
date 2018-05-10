#include <stdio.h>
#include <iostream>
using namespace std;

void countUp(unsigned int val) {

	
	if (val==0)
	{
		cout << val << endl;
	}
	else
	{
		countUp(val - 1);
		cout << val << endl;
	}
	
	
}

int numTrues(bool vec[], int sizeVec, unsigned int index) {
	 
	if (index < sizeVec)
	{
		if (vec[index] == true)
		{
			return 1 + numTrues(vec,sizeVec,index+1);
		}
		else
		{
			return numTrues(vec, sizeVec, index + 1);
		}

	}
	else
	{
		return 0;
	}

}

bool searchRec(int vec[], int sizeVec, unsigned int index, int val)
{
	if (index < sizeVec)
	{
		if (vec[index] == val)
		{
			return true;
		}
		else
		{
			return searchRec(vec, sizeVec, index + 1, val);
		}
		
	}
	else
	{

		return false;
	}

}

int sumElemsRec(int vec[], unsigned int size, int index)
{
	if (index < size)
	{
		return vec[index] + sumElemsRec(vec, size, index + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	/*int vec[6] = {1,1,1,1,1,1};
	cout << sumElemsRec(vec,6,0) << endl;*/

	/*int vec[5] = { 1,2,3,4,6 };
	cout << searchRec(vec,5,0,5) <<endl;*/

	/*bool vec[4] = { true, false, false, true };
	cout << numTrues(vec, 4, 0) << endl;*/

	//countUp(5);
	system("pause");
	return 0;
}