s = "egg"
t = "add"
s_to_t_mapping = {}
t_to_s_mapping = {}
st = 1

for i in range(len(s)):
    if s[i] in s_to_t_mapping and s_to_t_mapping[s[i]] != t[i]:
        st = 0
        break
    if t[i] in t_to_s_mapping and t_to_s_mapping[t[i]] != s[i]:
        st = 0
        break
    s_to_t_mapping[s[i]] = t[i]
    t_to_s_mapping[t[i]] = s[i]

if st == 0:
    print('false')
else:
    print('true')
