from timeit import repeat
from turtle import *
#125
#color("blue")
#begin_fill()
#Kreuz()
#end_fill()

def Kreuz():
    repeat 4:
     forward(50)
     right(90)
     forward(40)
     right(90)
     forward(50)
     left(90)
def VierEck(a):
    repeat 4:
     forward(a)
     right(90)
speed(10)
hideturtle()
#Hauptprogramm
color("red")
begin_fill()
VierEck(250)

forward(145)

right(90)

forward(108)
left(90)
end_fill()
color("white")
begin_fill()
Kreuz()
end_fill()
