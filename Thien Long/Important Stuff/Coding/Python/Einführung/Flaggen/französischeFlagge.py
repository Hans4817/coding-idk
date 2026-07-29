import turtle
from turtle import *


def Flagge(Laenge,Breite):
    repeat 2:
     forward(Laenge)
     right(90)
     forward(Breite)
     right(90)
    
    

turtle.Screen().bgcolor("orange")
hideturtle()
left(90)
forward(100)
left(90)
forward(80)
left(180)
#Hauptprogramm
color("blue")
begin_fill()
Flagge(200,100)
right(90)
forward(100)
left(90)
end_fill()

color("white")
begin_fill()
Flagge(200,100)
right(90)
forward(100)
left(90)
end_fill()

color("red")
begin_fill()
Flagge(200,100)
right(90)
forward(100)
left(90)
end_fill()