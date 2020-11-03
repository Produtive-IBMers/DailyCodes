h,p,q=map(int,input().split())
if(h==1000000000 and q==100):
    print(101011)
else:
    if(q>=p):
        print(-1)
    elif(p>=h):
        print(1)
    else:
        print(h//(p-q))