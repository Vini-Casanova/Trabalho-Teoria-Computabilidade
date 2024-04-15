def max(n, v):
    if n == 1: return v[0]
    else:
        x = max(n-1,v)
        if x > v[n-1]: return x
        else: return v[n-1]



max(5,[77,88,200,66,99])

(RX,A T1 T2 B C T1 T2 B C T1 T2 C T1)

