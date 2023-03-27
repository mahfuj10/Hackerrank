const btn0 = document.getElementById("btn0");
const btn1 = document.getElementById("btn1");
const btnSum = document.getElementById("btnSum");
const btnSub = document.getElementById("btnSub");
const btnMul = document.getElementById("btnMul");
const btnDiv = document.getElementById("btnDiv");
const btnClr = document.getElementById("btnClr");
const btnEql = document.getElementById("btnEql");
const res = document.getElementById("res");

btn0.onclick = function(){
    res.innerHTML += "0" 
}

btn1.onclick = function(){
    res.innerHTML += "1" 
}

btnSum.onclick = function(){
    res.innerHTML += "+" 
}

btnSub.onclick = function(){
    res.innerHTML += "-" 
}

btnMul.onclick = function(){
    res.innerHTML += "*" 
}

btnDiv.onclick = function(){
    res.innerHTML += "/" 
}

btnClr.onclick = function(){
    res.innerHTML = "" 
}

btnEql.onclick= function(){
    let s = res.innerText;
    s = Math.floor(eval(s.replace(/([01]+)/g, '0b$1'))).toString(2);
    res.innerHTML = s
}