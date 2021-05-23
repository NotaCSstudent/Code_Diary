#Square = lambda x : x*x
#Root = lambda x : int(Square(x)**0.5)
#print(Square(5))
#print(Root(5))


class Add_Stuff:
    def __init__(self,x:int):
        self.x = x
    
    square = lambda self : self.x**2



t = Add_Stuff(3)

t.square()
print(t.x)