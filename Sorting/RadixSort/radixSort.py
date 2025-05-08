myArray = [170, 45, 75, 90, 802, 24, 2, 66]
print(myArray)

radixArray = [[], [], [], [], [], [], [], [], [], []]
maxValue = max(myArray)
exp = 1

while maxValue // exp > 0:

    while len(myArray) > 0:

        val = myArray.pop()
        radisIndex = (val // exp) % 10
        radixArray[radisIndex].append(val)

    for bucket in radixArray:

        while len(bucket) > 0:

            val = bucket.pop()
            myArray.append(val)

    exp *= 10

print(myArray)
