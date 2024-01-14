nums = [1,1,2,2,2,3]
nums.sort()
m = nums[0]
freq_arr = []
for i in range(len(nums)):
    freq_arr.append(nums.count(nums[i]))
print(freq_arr)