#include<iostream>
using namespace std;

// Create main and temporary array
int arr[20], B[20];
int n;

void input() 
{
    while (true) 
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n---------------------------" << endl;
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n---------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// create function mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1.a
    }
 
    int mid = (low + high) / 2; // step 2