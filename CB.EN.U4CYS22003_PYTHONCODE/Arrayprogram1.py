fruits = [""] * (5)

for index in range(0, 4 + 1, 1):
    print("Enter fruit name for index=[" + str(index) + "]")
    fruit = input()
    fruits[index] = fruit
print("Array Contents")
for index in range(0, 4 + 1, 1):
    print("Array Contents fruits [" + str(index) + "]=" + fruits[index])
