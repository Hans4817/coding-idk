import random

def Ration():
    z = random.randint(-100,100)
    z1 = random.randint(-100,100)
    print(z,"+", z1)
    erg = z + z1
    z3 = input()

    if int(z3) == int(erg):
        print("Richtig")
    else:
        print("Falsch! Ergebnis:", erg)

def RationTest():
    h = input("Wie viele aufgaben wollen sie haben?")
    Punkte = 0
    for i in range(1,int(h)+1):
        random1 = random.randint(1,4)
        z = random.randint(-100,100)
        z1 = random.randint(-100,100)

        if int(random1) == 1:
            erg = z + z1
        elif int(random1) == 2:
            erg = z - z1
        elif int(random1) == 3:
            erg = z * z1
        elif int(random1) == 4:
            erg = z / z1

        print(z ,"+", z1)
        a = input()
        if int(a) == int(erg):
            Punkte+=1

    print("Ergebnis:", Punkte, "punkte")


RationTest()
