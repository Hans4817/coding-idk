let result = document.getElementById("result");

let decimalInput = parseInt(window.prompt("Geben Sie Dezimalzahl ein: "));
const decimalTempelate = decimalInput.toString();

let array = [];
for(let i = 10; i >= 0; i--) { // initialize array for pow(2, 1) till pow(2, 10)
    array[i] = Math.pow(2, i);
}

let bits = [];

let i = 10;
let start = false;
while(i !== -1) {
    if(decimalInput >= array[i]) {
        bits[i] = 1;
        start = true;
        decimalInput -= array[i];
    }
    else if(start) {
        bits[i] = 0;
    }
    i--;
}

let output = "";
result.textContent = "Decimal: " + decimalTempelate + " | Binaer: ";

// this is the output of the bits array
for(let i = bits.length - 1; i >= 0; i--) {
    output += bits[i];
}
console.log(output);
result.textContent += output;