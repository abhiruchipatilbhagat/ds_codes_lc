def containsDuplicate(nums):
    nums.sort()
    for i in range(len(nums)-1):
        if nums[i] == nums[i+1]:
            return True
    return False

nums = [1, 2, 4, 1]
print(containsDuplicate(nums))
