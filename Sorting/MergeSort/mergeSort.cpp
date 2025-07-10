#include<vector>
#include<iostream>

int* merge(int array[], int start, int middle, int end)
{
    int i, j, k;
    int leftLength = middle - start + 1;
    int rightLength = end - middle;

    std::vector<int> left(leftLength), right(rightLength);

    for(i = 0; i < leftLength; i++)
        left[i] = array[start + i];
    for(j = 0; j < rightLength; j++)
        right[j] = array[middle + 1 + j];

    i = 0;
    j = 0;
    k = start;

    while(i < leftLength && j < rightLength)
    {
        if(left[i] < right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < leftLength)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while(j < rightLength)
    {
        array[k] = right[j];
        j++;
        k++;
    }
    return array;
}

int* mergeSort(int array[], int start, int end)
{
    if(start < end)
    {
        int middle = (start + end)/2;
        mergeSort(array, start, middle);
        mergeSort(array, middle + 1, end);
        merge(array, start, middle, end);
    }
    return array;
}

int main()
{
    int unsortedArr[] = {3, 7, 6, -10, 15, 23, 55, -13};

    int arrayLength = sizeof(unsortedArr) / sizeof(unsortedArr[0]);

    mergeSort(unsortedArr, 0, arrayLength - 1);

    for(int element : unsortedArr)
        std::cout << element << ", ";

    return 0;
}
