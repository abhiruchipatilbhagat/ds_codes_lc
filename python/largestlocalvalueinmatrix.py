grid = [[9,9,8,1],[5,6,2,6],[8,2,6,4],[6,2,2,2]]
array = []

for i in range(1, len(grid)-1):
    for j in range(1, len(grid[i])-1):
        lst = [
            grid[i-1][j-1], grid[i-1][j], grid[i-1][j+1],
            grid[i][j-1], grid[i][j], grid[i][j+1],
            grid[i+1][j-1], grid[i+1][j], grid[i+1][j+1]
        ]
        array.append(lst)
print(array)
n = int(len(array)**(1/2))
lst2 = []
for i in range(0, n**2, n):
    lst3 = []
    for j in range(i, i+n):
        m = max(array[j])
        lst3.append(m)
    lst2.append(lst3)
print(lst2)
