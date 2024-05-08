#include <iostream>
using namespace std;

int getMin(int arr[], int n)
{
    int mini = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
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

    cout << "Min element is: " << getMin(arr, n) << endl;
    return 0;
}