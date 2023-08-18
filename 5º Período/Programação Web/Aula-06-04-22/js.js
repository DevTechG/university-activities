function clicado() {
	alert("Clicado");
}

function exibirDiv(nome) {
	let elemento = document.getElementById(nome);
	elemento.classList.toggle("mostrar");
}

let botao = document.getElementById("a");
botao.addEventListener ('click', ()=> {
	exibirDiv("amarelo")	
});

let b = document.getElementById("v");
b.addEventListener ('click', ()=> {
	exibirDiv("vermelho")
});