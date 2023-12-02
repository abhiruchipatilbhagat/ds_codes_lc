lst_main = [[1]]
lst = [1]
lst2 = []
for i in range(5):
    lst2.append(1)
    for i in range(len(lst)-1):
        lst2.append(lst[i]+lst[i+1])
    lst2.append(1)
    lst_main.append(lst2)
    lst  = lst2
    lst2 = []
print(lst_main)