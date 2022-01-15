#include <iostream>
using namespace std;
void inputArr(int *arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
}
void printArr(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	} 

}
void deleteIndexArr(int *&arr, int &size ) {
	int k=0, j=0, newsize;
	
	for (int  i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			k++;
		}
	}
	int* newArr = new int[size - k];

	for (int  i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			newArr[j] = arr[i];
			j++;
		}
	}
	
	newsize = size - k;
	size = newsize;
	for (int i = 0; i < size; i++)
	{
		arr[i] = newArr[i];
	}
	
	delete[]newArr;
	
}
int main()
{
	int n;
	cout << "enter n = ";
	cin >> n;
	int* arr = new int[n];

	inputArr(arr, n);
	printArr(arr, n);
	cout << endl;
	deleteIndexArr(arr, n);
	cout << endl;
	printArr(arr, n);

	delete[]arr;
}

