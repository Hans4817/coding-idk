woerter = {}

fobj = open("WoerterBuch.txt", "r")
for line in fobj:
    line = line.strip()
    zuordnung = line.split(" ")
    woerter[zuordnung[0]] = zuordnung[1]
fobj.close()

while True:
    wort = input("Geben sie ein Wort ein:")
    if wort in woerter:
        print("Das Deutsche Wort lautet:", woerter[wort])
    else:
        print("Das Wort ist unbekannt")