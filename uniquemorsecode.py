words = ["gin","zen","gig","msg"]
morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
alpha = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
final = []
for i in words:
    wordsinmorse = ""
    for j in i:
        m = alpha.index(j)
        wordsinmorse += morse[m]
    final.append(wordsinmorse)
m = []
for k in final:
    if k not in m:
        m.append(k)
print(final)
return len(m)
