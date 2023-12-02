def common():
    nums1 = [1000000000, 1000000000]
    nums2 = [1000000000]
    num = nums1 + nums2
    print(num)
    common = []
    for i in num:
        if num.count(i) == 2:
            common.append(i)
    print(common)
    common.sort()

    return common[0] if common else -1

print(common())
