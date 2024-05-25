import sys

rpt = int(sys.stdin.readline())
for i in range(rpt):
    occidens, orientem = map(int, sys.stdin.readline().split())
    comb=1
    comb1=1
    for lst_or in range(orientem-occidens+1,orientem+1):
        comb*=lst_or
    for lst_oc in range(1,occidens+1):
        comb//=lst_oc
    print(comb)