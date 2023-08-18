let pessoas = [{
	"id": 1,
	"nome": "Gabriel",
	"idade":22
 }, {
	"id": 2,
	"nome": "Guilherme",
	"idade":20
}, {
	"id": 3,
	"nome": "Pedro",
	"idade":20
}, {
	"id": 4,
	"nome": "Filipe",
	"idade":19
}, {
	"id": 5,
	"nome": "Murillo",
	"idade":20
}, {
	"id": 6,
	"nome": "Mateus",
	"idade":20
}, {
	"id": 7,
	"nome": "Jheovanna",
	"idade":20
}, {
	"id": 8,
	"nome": "Davi",
	"idade":22
}, {
	"id": 9,
	"nome": "Renan",
	"idade":28
}
];

let lista = document.getElementById("lista");
let conteudo = '';

pessoas.forEach((pessoa) => {
	conteudo +=`
		<div class = "alert alert-info">
			<p id="p${pessoa.id}"> ${pessoa.nome} tem ${pessoa.idade} anos.
		</div>`
});

lista.innerHTML = conteudo;

pessoas.forEach((pessoa) => {
	let el = document.getElementById(`p${pessoa.id}`);
	el.addEventListener("click", () => {
		alert(`Clicou em ${pessoa.nome}`);
	})
});