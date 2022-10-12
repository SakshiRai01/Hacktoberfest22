
#include <bits/stdc++.h>
using namespace std;

void checkArrays(int arr1[], int arr2[], int N)
{
	
	int count = 0;

	bool flag = true;

	for (int i = 0; i < N; i++) {

		if (arr1[i] != arr2[i]) {

			if (arr1[i] == 0)

				count++;
			else {

				count--;
				if (count < 0) {
					flag = 0;
					break;
				}
			}
		}
	}


	if (flag && count == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}


int main()
{
	
	int arr1[] = { 0, 0, 1, 1 };
	int arr2[] = { 1, 1, 0, 0 };

	// Size of the array
	int N = sizeof(arr1) / sizeof(arr1[0]);
	checkArrays(arr1, arr2, N);

	return 0;
}
