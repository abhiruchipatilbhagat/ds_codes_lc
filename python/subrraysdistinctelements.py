nums = [1,1]
ans = 0
l = len(nums)
for i in range(1, l+1):
    for j in range(l-i+1):
        a = nums[j:j+i]
        m = []
        for k in a:
            if k not in m:
                m.append(k)
        lm = len(m)
        ans += lm**2
print(ans)