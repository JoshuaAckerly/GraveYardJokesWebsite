$(document).ready(function() {
var date = new Date();
var fullYear = date.getFullYear();
var copyright = document.getElementById("copyright");
copyright.innerHTML = "\u00A9" + fullYear + "GraveYardJokes";
});