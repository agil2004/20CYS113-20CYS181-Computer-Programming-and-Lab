names = [""] * (5)

for i in range(0, 4 + 1, 1):
    print("enter the name=[" + str(i) + "]")
    name = input()
    names[i] = name
print("Array contents")
for i in range(0, 4 + 1, 1):
    print("Array contents names[" + str(i) + "]=" + names[i])
