const final = document
.getElementById("btn")
.addEventListener("click", function (event) {
  const n = (number = event.target.innerText);
  const numberInt = parseInt(n) + 1;
  document.getElementById("btn").innerText = numberInt;
});