// Christopher Lebovitz
// student Id: w10012072
// CSC 307 G001
// Implement your sorting algorithms. You must implement one algorithm in Category 1 and one algorithm in Category 2.
// implemeted bubble sort.

#include <iostream>

using namespace std;

// function to holde and swap numbers
void swap(int *num1, int *num2) {

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
// function to look at each number in the array and checks if the number before is greather than the number after it.
void bubbleSort(int bubbleArr[], int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (bubbleArr[j] > bubbleArr[j + 1])
				swap(&bubbleArr[j], &bubbleArr[j + 1]);
		}
	 }
}
// function to print the array
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
	int bubblearr[] = { 30, 10, 21, 15, 18, 42, 7, 28, 11, 17, 9, 2, 12, 14, 50 };
	int length = sizeof(bubblearr)/ sizeof(bubblearr[0]);// to determine the size of the array using sizeof
	cout << "Unordered List" << endl;
	printArr(bubblearr, length);
	cout << endl;
	bubbleSort(bubblearr, length);
	cout << "Sorted List" << endl;
	printArr(bubblearr, length);

	return 0;
}