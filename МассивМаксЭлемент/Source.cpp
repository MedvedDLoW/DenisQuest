#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int size, i, max, second, maxnum = 0;
	cout << "Enter array size ";
	cin >> size;
	if (size <= 0)
	{
		cout << "There is no such array" << endl;
		system("pause");
		return 0;
	}
	int *A = new int(size);
	for (i = 0; i < size; i++)
	{
		printf("Enter array element ");
		cin >> A[i];
	}
	max = A[0];
	for (i = 1; i < size; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			maxnum = i;
		}
	}
	if (size > 1)
	{
		if (maxnum == 0)
			second = A[1];
		else
			second = A[0];
		for (i = 1; i < size; i++)
		{
			if (maxnum != i)
			{
				if (A[i] > second)
					second = A[i];
			}
		}
	}
	cout << "Max array element = " << max << endl;
	if (size > 1)
	{
		cout << "Second by size array element = " << second << endl;
	}
	system("pause");
return 0;
}