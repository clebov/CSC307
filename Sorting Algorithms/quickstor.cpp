/*
Christopher Lebovitz
Student Id: w10012072
Implement your sorting algorithms. You must implement one algorithm in Category 1 and one algorithm in Category 2.
implemented quick sort
*/
void swap(int list[], int first, int second);
#include <iostream>

using namespace std;

int partition( int Arr[], int start, int last)
{
	int pivot;

	int smIndex;

	swap(Arr, start, (start + last)/2);

	pivot = Arr[start];
	smIndex = start;

	for (int i = start + 1; i <= last; i++)
	{
		if (Arr[i] < pivot)
		{
			smIndex++;
			swap(Arr, smIndex, i);
		}
	}
	swap(Arr, start, smIndex);

	return smIndex;
}

void swap(int list[], int first, int second) 
{ 
	int temp; 
temp = list[first]; 
list[first] = list[second]; 
list[second] = temp;
} //end swap

void quickSort(int Arr[], int start, int last)
{
	int pLocation;

	if (start < last)
	{
		pLocation = partition(Arr, start, last);
		quickSort(Arr, start, pLocation - 1);
		quickSort(Arr, pLocation + 1, last);
	}
}
void printArr(int bubblearr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << bubblearr[i];
		cout << " ";
	}
}

int main()
{



	int quickarr[] = { 30, 10, 21, 15, 18, 42, 7, 28, 11, 17, 9, 2, 12, 14, 50 };
	int length = sizeof(quickarr) / sizeof(quickarr[0]);// to determine the size of the array using sizeof
	cout << "Unordered List" << endl;
	printArr(quickarr, length);
	cout << endl;
	quickSort(quickarr, 0, length - 1);
	cout << "Sorted List" << endl;
	printArr(quickarr, length);

	return 0;
}