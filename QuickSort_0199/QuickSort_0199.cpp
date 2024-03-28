#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang element array";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20" << endl;

	}
	cout << "\n--------------------" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
	
	
}
// swap the element at index x with the element at index y
void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] =temp;
	mov_count++;
}