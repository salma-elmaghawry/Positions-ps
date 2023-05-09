#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num <= 10)
			cout << "A[" << i << "] = " << num << endl;;
	}


	//another solution 
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		if (arr[i] <= 10) {
			cout << "A[" << i << "]" << " = " << arr[i] << endl;
		}
	}
	return 0;
}