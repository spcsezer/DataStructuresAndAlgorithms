#include <iostream>

int* insertionSort(int array[], int arrayLength)
{
    for(int step = 0; step < arrayLength - 1; step++)
    {
        int minIndex = step;

        for(int i = step + 1; i < arrayLength; i++)
        {
            if(array[i] < array[minIndex])
            {
                minIndex = i;
            }
        }
        int temp = array[step];
        array[step] = array[minIndex];
        array[minIndex] = temp;
    }
    return array;
}

int main()
{
    int exArray[] = {20, 12, 10, 15, 2};
    int arrayLength = sizeof(exArray) / sizeof(exArray[0]);

    insertionSort(exArray, arrayLength);

    for(int elements : exArray)
    {
        std::cout << elements << ", ";
    }

    return 0;
}
