let result = document.getElementById("result");

let decimalInput = parseInt(window.prompt("Geben Sie Dezimalzahl ein: "));
const decimalTempelate = decimalInput.toString();

let array = [
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
    "A", "B", "C", "D", "E", "F"
];

let z = 0
let remainder = [];
while (decimalInput > 0 && z <= 100) {
    remainder[z] = decimalInput % 16;

    decimalInput = Math.floor(decimalInput / 16);
    z++;
}

let output = "";
result.textContent = "Decimal: " + decimalTempelate + " | Hexar: ";

// this is the output of the bits array
for(let i = remainder.length - 1; i >= 0; i--) {
    output += array[remainder[i]];
}
result.textContent += output;