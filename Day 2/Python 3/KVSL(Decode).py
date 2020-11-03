for i in range(int(input())):
    s=input()
    l=len(s)
    s1=s[:l//2][::-1]
    s2=s[l//2:][::-1]
    s3=""
    
    for i in range(l):
        try:
            s3+=s2[i]+s1[i]
        except IndexError:
            break
    if(l%2==0):
        print(s3)
    else:
        print(s3+s2[-1])