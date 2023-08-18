function curtir(id) {
	let el = document.getElementById(id);
	el.classList.toggle("curtido");	
}

function overlay(id) {
	let el = document.getElementById(id);
	setTimeout(() => {
		el.classList.toggle("exibir");}, 1000);
	el.classList.toggle("exibir");
}

function curtirbody(id) {
	let el = document.getElementById(id);
	el.classList.add("curtido");	
}

pessoas.forEach((pessoa) => {
	let el = document.getElementById(`div-card-body${pessoa.id}`);
	el.addEventListener("dblclick", () => {
		curtirbody(`div-card${pessoa.id}`);
		overlay(`over${pessoa.id}`);
	});	
});

pessoas.forEach((pessoa) => {
	let el = document.getElementById(`icon${pessoa.id}`);
	el.addEventListener("click", () => {
		curtir(`div-card${pessoa.id}`);
	})
});