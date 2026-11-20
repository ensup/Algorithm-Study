while True:
    name, age, weight = input().split()
    if name=='#' and age=='0' and weight=='0':
        break
    if int(age)>17 or int(weight)>=80:
        team='Senior'
    else:
        team='Junior'
    print(name, team)