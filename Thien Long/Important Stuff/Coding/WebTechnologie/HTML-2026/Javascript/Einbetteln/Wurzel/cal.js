let input = parseInt(prompt("Bitte geben Sie Wurzel ein: "));

for(let i = 1; i <= input; i++) {
    let result = Math.sqrt(i);
    document.write("Die Wurzel von " + i + " ergibt " + result + "<br>");
}