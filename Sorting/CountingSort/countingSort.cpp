#include<vector>
#include<iostream>

void countSort(int array[], int arrayLength)
{
    int max = array[0];

    for(int i = 1; i < arrayLength; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    std::vector<int> count(max + 1, 0);
    std::vector<int> output(max + 1);

    for(int i = 0; i < arrayLength; i++)
    {
        count[array[i]]++;
    }

    for(int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for(int i = arrayLength - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    for(int i = 0; i < arrayLength; i++)
    {
        array[i] = output[i];
    }
}

int main()
{
    int array[] = {4, 2, 2, 8, 3, 3, 1};

    countSort(array, sizeof(array)/sizeof(array[0]));

    for(int element : array)
    {
        std::cout << element << ", ";
    }

    return 0;
}
