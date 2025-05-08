def bubbleSort(array):

    for i in range(len(array)):

        for j in range(0, len(array) - i - 1):

            if array[j] > array[j + 1]:

                array[j], array[j + 1] = array[j + 1], array[j]

array = [-2, 3, 1, 0, 5, -1]

print(array)

bubbleSort(array)

print(array)
