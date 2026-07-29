from gamegrid import *
class Raumschiff(Actor):
    pass

def tasteGedrueckt(tastencode):
        xpos = raumschiff.getX()
        if tastencode == 37:
            if xpos > 20:
                raumschiff.setX(xpos - 5)
        elif tastencode == 39:
            if xpos < 580:
                raumschiff.setX(xpos + 5)

feld = GameGrid(600,600,1,None,"sprites/town.jpg",False)
feld.setTitle("Space Attack")
raumschiff = Raumschiff("sprites/spaceship.gif")
feld.addActor(raumschiff,Location(300,586))
feld.setSimulationPeriod(20)
feld.addKeyRepeatListener(tasteGedrueckt)
feld.show()
feld.doRun()
