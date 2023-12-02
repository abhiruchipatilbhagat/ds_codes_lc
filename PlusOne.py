digits = [9,9]
length = len(digits)
number = 0
for i in range(len(digits)):
    number += digits[i]*(10**(length - i - 1))
print(number)
number += 1
lst = [int(i) for i in str(number)]
print(lst)