def binary_search(arr, x):
	low = 0
	high = len(arr) - 1
	mid = 0
	while low <= high:
		mid = (high + low) // 2
		if arr[mid] < x:
			low = mid + 1
		elif arr[mid] > x:
			high = mid - 1
		else:
			return mid
	return arr.index(low)+1

arr = [ 2, 3, 4, 10, 40 ]
x = 15

result = binary_search(arr, x)

print(str(result))
