s=input()
c=s.count("c")
a=s.count("a")
t=s.count("t")
m=max(c,a,t)
print(min(c,a,t))
print(m-c)
print(m-a)
print(m-t)