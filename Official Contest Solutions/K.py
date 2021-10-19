import sys
sys.stdin = open('pair.in', 'r')
t = int(input())
for _ in range(t):
    a = int(input())
    k = int(input())
    if(a%k==0):
        print('YES')
    else:
        print('NO')
