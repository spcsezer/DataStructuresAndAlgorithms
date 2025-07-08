#include<iostream>

int* insertionSort(int array[], int size)
{
    for(int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        while(j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    return array;
}

int main()
{
    int exArray[] = {9, 5, 1, 4, 3};

    insertionSort(exArray, sizeof(exArray) / sizeof(exArray[0]));

    for(int elements : exArray)
    {
        std::cout<<elements<<", ";
    }

    return 0;
}
