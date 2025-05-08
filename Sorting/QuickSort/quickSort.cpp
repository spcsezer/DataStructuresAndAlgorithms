#include <iostream>

int partition(int array[], int left, int right)
{
    int i = left;
    int j = right - 1;
    int pivot = array[right];

    while (i < j)
    {
        while (i < right && array[i] < pivot)
        {
            i+=1;
        }
        while (j > left && array[j] >= pivot)
        {
            j-=1;
        }
        if(i < j)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    if(array[i] > pivot)
    {
        int temp = array[i];
        array[i] = array[right];
        array[right] = temp;
    }
    return i;
}

void quickSort(int array[], int left, int right)
{
    if(left < right)
    {
        int partitionPos = partition(array, left, right);
    
        quickSort(array, partitionPos + 1, right);
        quickSort(array, left, partitionPos - 1);
    }
}

int main()
{
    int array[] = {6, 5, 12, 10, 9, 1};

    quickSort(array, 0, 5);

    for(int i = 0; i < 6; i++)
    {
        std::cout << array[i] << ", ";
    }

    return 0;
}
