#include<iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Returns maximum repeating element in arr[0..n-1].
// The array elements are in range from 0 to k-1
int maxRepeating(int* arr, int n, int k)
{
	// Iterate though input array, for every element
	// arr[i], increment arr[arr[i]%k] by k
	for (int i = 0; i < n; i++)
		arr[arr[i]%k] += k;

	// Find index of the maximum repeating element
	int max = arr[0], result = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			result = i;
		}
	}

	// Return index of the maximum element
	return result;
}

// Driver program to test above function
int main()
{
    vector<int>arr;
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    char c;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        is>>num;
        arr.push_back(num);
        if(!is.eof()) is>>c;
        else break;
    }
    for(int x: arr)
    cout<< x <<" ";
    /*




    vector<int> arr;
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    char c;

    cout << "Type any number of single digit ints" <<
        "with spaces and that ends with a zero 0:\n";

    while (true)
    {
        is >> num;
        arr.push_back(num);
        if(!is.eof() && arr.end() == 0 )
        {
            is >> c;
        }
        else break;
    }

    //for (unsigned int i = 0; i < arr.size(); i++)


    for(int x: arr)
    cout<< x <<" ";
    */

    /*
    vector<int> arr;
    string input;
    getline(cin, input);
    istringstream is(input);
    int num;
    char c;
    */

    /*
	//int arr[] = {};
	//int input;

	cout << "Type any number of single digit ints " <<
        "with spaces and that ends with a zero 0:\n";
    for (int i = 0; i <= sizeof.arr; i++)
    {
        //arr.append(input);
        cin >> arr;
    }


	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 100;

	cout << "The maximum repeating number is " <<
		maxRepeating(arr, n, k) << endl;
    */
	return 0;
}
