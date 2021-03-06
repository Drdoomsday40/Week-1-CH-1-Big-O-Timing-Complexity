#include<iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Returns maximum repeating element in arr[0..n-1].
// The array elements are in range from 0 to k-1
int maxRepeating(vector<int> &arr, int n, int k)
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
    cout << "Type any number of single digit ints" <<
        "with spaces and that ends with a zero 0:\n";

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

    int n = arr.size()/arr.size(0);
	int k = 100;

	cout << "The maximum repeating number is " <<
		maxRepeating(arr, n, k) << endl;
		
		
		
int numbers[x];
cout << enter data << i + 1 << endl;
in >> x;
assert(arr[x-1]==0);
assert(x>=0);

for (int i = 0; i < x; i++)
	cin >> numbers[i];




