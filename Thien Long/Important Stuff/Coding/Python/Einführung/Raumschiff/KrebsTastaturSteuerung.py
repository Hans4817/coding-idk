from gamegrid import *
class Krebs(Actor):
    pass
def tasteGedrueckt(tastencode):
    xpos = krebs.getX()
    if tastencode == 37:
         krebs.setX(xpos - 5)
    elif tastencode == 39:
          krebs.setX(xpos + 5)
    feld.refresh()

feld = GameGrid(800,600)
feld.setTitle("Krebsspiel")
feld.setBgColor(255,255,255)
krebs = Krebs("sprites/crab.png")
feld.addActor(krebs,Location(400,550))
feld.addKeyRepeatListener(tasteGedrueckt)
feld.show()
