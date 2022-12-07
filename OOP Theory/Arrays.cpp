/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// use initializer list to initialize array n
	int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	cout << "Element" << setw(13) << "Value" << endl;
	// output each array element's value
	for (int i = 0; i < 10; ++i)
		cout << setw(7) << i << setw(13) << n[i] << endl;
} // end main

*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int arraySize = 10; // size of array a
	int data[arraySize] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
	int insert; // temporary variable to hold element to insert
	cout << "Unsorted array:\n";
	// output original array
	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];
	// insertion sort
	// loop over the elements of the array
	for (int next = 1; next < arraySize; ++next)
	{
		insert = data[next]; // store the value in the current element
		int moveItem = next; // initialize location to place element
		// search for the location in which to put the current element
		while ((moveItem > 0) && (data[moveItem - 1] > insert))
{
// shift element one slot to the right
data[moveItem] = data[moveItem - 1];
moveItem--;
} // end while
		data[moveItem] = insert; // place inserted eleme
	} // end for
	cout << "\nSorted array:\n";
	// output sorted array
	for (int i = 0; i < arraySize; ++i)
		cout << setw(4) << data[i];
	cout << endl;
} // end main

*/
#include<iostream>
using namespace std;
void order(int *arrayItem);

int main()
{
	int arrayi[10] = { 3,9,8,5,6,7,2,10,1,4 };
	order(&arrayi[0]);
	for (int k = 0; k < 10; k++)
	{
		cout << arrayi[k]<<endl;
	}
	return 0;
}
void order(int *arrayitem)
{
	int temp;
	for (int i = 0; i < 10; i++)
			for (int j = i+1; j < 10; j++)
		{
			if (arrayitem[i] > arrayitem[j])
			{
				temp = arrayitem[j];
				arrayitem[j] = arrayitem[i];
				arrayitem[i] = temp;

			}
		}
	
	
}

