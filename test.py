def armstrong(n):
    s=str(n)
    num=n
    ans=0
    while(n>0):
        rem=n%10
        n=n//10
        ans=pow(rem,len(s))+ans
    if num==ans:
        return ans