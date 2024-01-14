s = "IDID"
array = []
l = len(s)+1
for i in range(l):
    array.append(i)
print(array)
arr = []
for i in s:
    if i=="I":
        arr.append(min(array))
        array.remove(min(array)) 
    elif i=="D":
        arr.append(max(array))
        array.remove(max(array))
arr.append(min(array))
print(array)
print(arr)
