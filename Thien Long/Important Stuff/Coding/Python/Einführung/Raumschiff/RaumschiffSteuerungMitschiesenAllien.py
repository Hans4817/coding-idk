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

class Alien(Actor):
    ypos = 0
    def act(self):
        self.ypos += 0.1
        self.setY(int(self.ypos))

def tasteGedrueckt(tastencode):
        xpos = raumschiff.getX()
        if tastencode == 37:
            if xpos > 20:
                raumschiff.setX(xpos - 5)
        elif tastencode == 39:
            if xpos < 580:
                raumschiff.setX(xpos + 5)
        elif tastencode == 32:
            for i in range(100):
                schuss()

def schuss():
    if raumschiff.timer < 0:
        geschoss = Geschoss("sprites/bomb.gif")
        feld.addActor(geschoss,Location(raumschiff.getX(),590))
        raumschiff.timer = 0

feld = GameGrid(600,600,1,None,"sprites/town.jpg",False)
feld.setTitle("Space Attack")
raumschiff = Raumschiff("sprites/spaceship.gif")
feld.addActor(raumschiff,Location(300,586))

for reihe in range (50,300,50):
    for spalte in range (40,570,40):
        alien = Alien("sprites/alien.png")
        alien.ypos = reihe
        feld.addActor(alien,Location(spalte,reihe))

feld.setSimulationPeriod(20)
feld.addKeyRepeatListener(tasteGedrueckt)
feld.show()
feld.doRun()
