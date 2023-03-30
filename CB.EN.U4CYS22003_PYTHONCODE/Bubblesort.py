length = int(input())
array = [0] * (length)

for i in range(0, length - 1 + 1, 1):
    array[i] = int(input())
high = length
for j in range(0, length - 1 + 1, 1):
    for i in range(0, high - 1 + 1, 1):
        high = length - i
        if array[i + 1] < array[i]:
            swaper = array[i]
            array[i] = array[i + 1]
            array[i + 1] = swaper
for i in range(0, length - 1 + 1, 1):
    print(array[i])
