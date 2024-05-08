#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int maxi = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max element is: " << getMax(arr, n) << endl;
    return 0;
}