import numpy as np



list = []

def Add_Num(x : float, n : int) -> int:
    for i in range(n):
        list.append(x)
    
    return n


Add_Num(1.2,3)
Add_Num(1.32,10)
Add_Num(1.234543,71)

Np_Array = np.array(list)


print("Hello")

print('Hello World')
print(np.array)