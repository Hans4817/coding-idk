from gturtle import *

def vieleck(anzahl,seite):
    repeat anzahl:
        forward(seite)
        right(360/ anzahl)
        

makeTurtle()
hideTurtle()
vieleck(12,50)