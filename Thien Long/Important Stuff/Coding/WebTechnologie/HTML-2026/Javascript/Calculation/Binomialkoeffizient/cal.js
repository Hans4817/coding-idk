function fakultaet(range) {
    if(range < 0) return;

    let result = 1;
    for(let i = 1; i <= range; i++) {
        result = result * i;
    }
    return result;
}

let n = parseInt(prompt("Bitte geben Sie n ein: "));
let k = parseInt(prompt("Bitte geben Sie k ein: "));

if(n > k) {
    let result = fakultaet(n) / (fakultaet(k) * fakultaet(n-k))

    let nHTML = document.getElementById("n");
    let kHTML = document.getElementById("k");
    nHTML.textContent = n;
    kHTML.textContent = k;

    let resultHTML = document.getElementById("result");
    resultHTML.textContent = result;
}
else {
    console.error("Error while passing parameters: n must be greater than k");
}