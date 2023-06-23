#include <iostream>
using namespace std;


//Book Allocation Problem /////////////////////////////////////////

int ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum = arr[i] + pagesum;
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}





int bookallocation(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    int end = sum;

    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n = 4;
    int m = 2;
    int arr[4] = {12, 34, 67, 90};

    int allocate = bookallocation(arr, 4, 2);
    cout << "The maximum no pages assigned to a student is: " << allocate;
    return 0;
}