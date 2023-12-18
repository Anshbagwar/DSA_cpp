#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cout << "enter the size of the array";
	cin >> n;
	int arr[100];
	for(int i =0;i<n;i++)
	{
		cin >>arr[i];
		
	}
	for(int i =0 ;i< n-1; i++)
	{
		int smallest = i;
		for(int j= i+1 ; j<n ; j++)
		{
			if (arr[smallest] > arr[j])
			{
				smallest = j ;
			}
		}
	int temp = arr[smallest];
	arr[smallest] = arr[i];
	arr[i] = temp;
	}	
	for(int i =0;i<n;i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
