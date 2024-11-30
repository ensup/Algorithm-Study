import sys
ipt=sys.stdin.readline
pwd={}
pwdn,tgn=map(int, ipt().rstrip().split())
for i in range(pwdn):
    site,passwd=ipt().rstrip().split()
    pwd[site]=passwd
for i in range(tgn):
    tg=ipt().rstrip()
    print(pwd[tg])