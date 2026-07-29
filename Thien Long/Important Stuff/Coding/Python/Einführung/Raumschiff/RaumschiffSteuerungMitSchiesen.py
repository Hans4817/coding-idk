from gamegrid import *
class Raumschiff(Actor):
    timer = 0
    def act(self):
        self.timer -= 1

class Geschoss(Actor):
    def act(self):
        ypos = self.getY()
        self.setY(ypos-5)
        if ypos < 0:
            feld.removeActor(self)


def tasteGedrueckt(tastencode):
        xpos = raumschiff.getX()
        if tastencode == 37:
            if xpos > 20:
                raumschiff.setX(xpos - 5)
        elif tastencode == 39:
            if xpos < 580:
                raumschiff.setX(xpos + 5)
        elif tastencode == 32:
            schuss()

def schuss():
    if raumschiff.timer < 0:
        geschoss = Geschoss("sprites/bomb.gif")
        feld.addActor(geschoss,Location(raumschiff.getX(),590))
        raumschiff.timer = 10

feld = GameGrid(600,600,1,None,"sprites/town.jpg",False)
feld.setTitle("Space Attack")
raumschiff = Raumschiff("sprites/spaceship.gif")
feld.addActor(raumschiff,Location(300,586))
feld.setSimulationPeriod(20)
feld.addKeyRepeatListener(tasteGedrueckt)
feld.show()
feld.doRun()
