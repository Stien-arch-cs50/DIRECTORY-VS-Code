#include <iostream>

using namespace std;

void merge(int *arr, int low, int high, int mid)
{
    int i = low , j = mid+1, k = 0, A[high - low +1] //in A the formulation is for array size.
    while (i < = mid && j < = high)
    if (arr[i] < arr[j])
        A[k++] = arr[i++];
        else
         A[k++] = arr[j++];
    while (i < = mid)                                /*this part is for adding the left over elements*/                   
    
        A[k++] = arr[i++];

    while (j < = high)
    
        A[k++] = arr[j++];
    
    for (i = low; i< = high; i++)
    
    arr[i] = A[i - low];

}

void merge_sort(int *arr, int low, int high)
{

    int mid = (low + high) / 2;
    if (low < high)
    {

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge()
    }
}

void printArray (int A[], int size ){
    for (int i = 0 ; i < size; i ++)
    {
        cout<<A[i]<< " ";
        cout<<endl;
    }
}

int main(void)
{
    arr [] = {38,27,43,3,9};
    merge_sort(arr, 0 , 4);
    merge()
    printArray(arr, 5)
    return 0;
}
