import math
import random
#Def
def Programm():
    def Plus(y,x):
        a = int(x) + int(y)
        print("Eingabe: ",str(y), "+",str(x))
        print("Lösung:",a)
        return a

    def Minus(y,x):
        a = int(x) - int(y)
        print("Eingabe: ",str(y), "-",str(x))
        print("Lösung:",a)
        return a

    def Mal(y,x):
        a = int(x) * int(y)
        print("Eingabe: ",str(y), "*",str(x))
        print("Lösung:",a)
        return a

    def Geteilt(y,x):
        a = int(y) / int(x)
        print("Eingabe: ",str(y), ":",str(x))
        print("Lösung:",a)
        c = int(y) % int(x)
        print("Rest:", c)
        return a
        return c

    def Potenz(y,x):
        z = math.pow(int(y),int(x))
        print(z)

    def Fakultät(y):

        print(math.factorial(int(y))) 

    def SummeVonSumme():
        i = 2
        a = 0
        Summe = 0
        z = input("Geben sie bitte die Zahl ein.")
        for i in range(int(z)+1):
            Summe = Summe + i
        print("----")
        print(Summe)
        return Summe

    def Wurzel():
        y = input("Bitte geben sie ein Zahl ein.")
        print(math.sqrt(int(y)))

    def Ration():
        random.randint
        y = input()



#Ende

#input
    print("*************************")
    print("")
    print("Taschenrechner in Python")
    print("")
    print("*************************")
    
    print("Suchen sie ein Operation aus.")
    for q in ['1. +', '2. -', '3. *', '4. :', '5. 1+1...', '6. Fakultät', '7. Potenz', '8. Wurzel']:
        print(q)

    Operationen = input("Welche Operationen willst du rechnen?")
#Ende

#If-Else von Def
    if Operationen == "+":
        Plus(y = input("Erste Zahlen "), x = input("Zweite Zahlen "))
    elif Operationen == "-":
        Minus(y = input("Erste Zahlen "), x = input("Zweite Zahlen "))
    elif Operationen == "*":
        Mal(y = input("Erste Zahlen "), x = input("Zweite Zahlen "))
    elif Operationen == ":":
        Geteilt(y = input("Erste Zahlen "), x = input("Zweite Zahlen "))
    elif Operationen == "1+1...":
        SummeVonSumme()
    elif Operationen == "Fakultät":
        Fakultät(y = input("Zahlen eingeben. "))
    elif Operationen == "Potenz":
        Potenz(y = input("Erste Zahlen "), x = input("Zweite Zahlen "))
    elif Operationen == "Wurzel":
        Wurzel()
    elif Operationen == "Ration":
        Wurzel()
#Ende

while True:
    Programm()
    print("Nochmal?")
    print("Bitte sagen sie ""Ja""oder ""Nein")
        exit()