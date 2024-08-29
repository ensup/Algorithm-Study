key = 1
rpt=int(input())
for i in range(rpt):
    str_ipt=input()
    if (
        str_ipt == 'Never gonna give you up' or
        str_ipt == 'Never gonna let you down' or
        str_ipt == 'Never gonna run around and desert you' or
        str_ipt == 'Never gonna make you cry' or
        str_ipt == 'Never gonna say goodbye' or
        str_ipt == 'Never gonna tell a lie and hurt you' or
        str_ipt == 'Never gonna stop'
    ):
        continue
    else:
        key=0
if key:
    print('No')
else:
    print('Yes')