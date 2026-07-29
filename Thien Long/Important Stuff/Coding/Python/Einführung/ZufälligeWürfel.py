import random

def Wuerfel():
    wuerfel = random.randint(1,6)
    print("Gewürfelt wurde", wuerfel)

def WuerfelMitRepeat():
    repeat 100:
       wuerfel = random.randint(1,6)
       print(wuerfel)

def zufaelligezahl():
    zufallszahl = random.randint(1,100)
    ratezahl = 0
    while ratezahl != zufallszahl:
        ratezahl = input("Rate die Zahl:")
        if ratezahl > zufallszahl:
            print(ratezahl, "ist zu groß")
        elif ratezahl < zufallszahl:
            print(ratezahl, "ist zu klein.")
    print("Glückwunsch,", zufallszahl, "ist die richtige Zahl!")

zufaelligezahl()