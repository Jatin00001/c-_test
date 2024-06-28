array = []

for _ in range(6):
    array.append(list(map(int, input().rstrip().split())))

# output of the array is 

#  [[1, 1, 1, 0, 0, 0], [0, 1, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0], [0, 0, 2, 4, 4, 0], [0, 0, 0, 2, 0, 0], [0, 0, 1, 0, 0, 0]]
print(array)