# 백준 5622 - 다이얼

dial = [ {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'},
         {'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'} ]
word = str(input())
time = 3*len(word)

for i in range (0, len(word)):
    for j in range (0, 8):
        if word[i] in dial[j]:
            time += j;
            
print(time)
