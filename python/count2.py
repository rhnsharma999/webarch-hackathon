s = raw_input()
dict = {}
for i in range(ord('a'),ord('z') + 1):
    dict[chr(i)] = 0 #initialise all zeros
for i in s:
    dict[i] += 1
for i in range(ord('a'),ord('z') + 1):
    if(dict[chr(i)] != 0):
        print('%c %d' %(chr(i),dict[chr(i)]))
