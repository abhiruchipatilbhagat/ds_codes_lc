nums=[1,5,2,4,1]
count = 0
for i in range(len(nums)-1):
    if nums[i+1]<=nums[i]:
        print(nums[i])
        print(nums[i+1])
        count += nums[i]+1-nums[i+1]
        nums[i+1] = nums[i]+1
        print(count)
        print("end")
print(count)