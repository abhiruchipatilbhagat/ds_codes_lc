
allowed = "abc"
words = ["a","b","c","ab","ac","bc","abc"]
count = 0
for i in words:
    s = 0
    for j in i:
        if j not in allowed:
            s = 1
    if s == 1:
        count += 1
print(len(words)-count)