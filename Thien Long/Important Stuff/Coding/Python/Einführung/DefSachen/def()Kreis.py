from gturtle import *

def kreise(anzahl, umfang):
    repeat anzahl:
        repeat 36:
            forward(umfang/36)
            right(10)
        umfang *=1.2

makeTurtle()
hideTurtle()
kreise(100,100)