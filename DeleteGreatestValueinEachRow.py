grid = [[1,2,4],[3,3,1]]
tsum = 0
for i in grid:
    i = i.sort()
for j in range(len(grid[0])):
    print(j)
    arr=[]
    for k in range(len(grid)):
        arr.append(grid[k][j])
    print(arr)
    m = max(arr)
    tsum += int(m)
print(grid)
print(tsum)