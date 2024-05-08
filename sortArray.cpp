#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge both arays
    int i = 0;
    int j = 0;
    // int l = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[k] = first[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = second[j];
            k++;
            j++;
        }
    }
    while (i < len1)
    {
        arr[k] = first[i];
        k++;
        i++;
    }
    while (j < len2)
    {
        arr[k] = second[j];
        k++;
        j++;
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // leftPart sort kar
    mergeSort(arr, s, mid);

    // rigth part sort kar
    mergeSort(arr, mid + 1, e);

    // merge both arrays
    merge(arr, s, e);
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

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}