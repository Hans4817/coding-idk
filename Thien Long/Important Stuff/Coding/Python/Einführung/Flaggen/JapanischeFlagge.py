import turtle
from turtle import *

def Kreis(a):
    repeat 20:
       forward(a)
       right(360 / 20)
        

speed(1000000)
hideturtle()
#Hauptprogramm
color("red")
begin_fill()
Kreis(20)
left(90)
end_fill()

color("white")
begin_fill()
forward(90)
end_fill()
color("black")

right(90)
forward(90)
right(180)
forward(210)
left(90)
forward(290)
left(90)
forward(250)
left(90)
forward(290)
left(90)
forward(100)