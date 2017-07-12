import sys
n,d = map(int,raw_input().split())
arr = map(int,raw_input().split())
for i in range(0,n):
    sys.stdout.write(str(arr[(i + d)%n]) + ' ')
