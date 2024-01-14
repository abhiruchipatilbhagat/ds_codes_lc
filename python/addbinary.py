a = '1010'
b = '1011'
if len(a) > len(b):
    for i in range(len(a) - len(b)):
        b = '0' + b
if len(b) > len(a):
    for i in range(len(b) - len(a)):
        a = '0' + a
string = ""
carry = 0
for i in reversed(range(len(a))):
    if int(a[i]) + int(b[i]) + carry == 0:
        string = '0' + string
        carry = 0
    elif int(a[i]) + int(b[i]) + carry == 1:
        string = '1' + string
        carry = 0
    elif int(a[i]) + int(b[i]) + carry == 2:
        string = '0' + string
        carry = 1
    elif int(a[i]) + int(b[i]) + carry == 3:
        string = '1' + string
        carry = 1
if carry == 1:
    string = '1' + string
print(string)
