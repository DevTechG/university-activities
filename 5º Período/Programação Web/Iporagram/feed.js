let pessoas = [{
	"id": 1,
	"user": "teste",
	"profile": "https://st.depositphotos.com/1008709/4676/i/600/depositphotos_46768767-stock-photo-hands-in-art-logo.jpg",
	"post":"https://blog.cenatcursos.com.br/wp-content/uploads/2019/07/Imagem1.jpg",
	"legenda": "Coração de planta"
 }, {
	"id": 2,
	"user": "teste2",
	"profile": "https://www.fao.org/fileadmin/user_upload/soils-2015/images/ES/logo_only.jpg",
	"post":"https://envolverde.com.br/wp-content/uploads/por-do-sol-1.jpg",
	"legenda": "Sol"
}, {
	"id": 3,
	"user": "teste3",
	"profile": "https://cdn.shopify.com/shopifycloud/hatchful_web_two/bundles/0d70200090b21d6e0d3fde7eb894b303.png",
	"post": "https://wwfbr.awsassets.panda.org/img/web_247003_40190.jpg",
	"legenda": "Pôr do Sol"
}
];

let card = document.getElementById("card");
let conteudo = '';

pessoas.forEach((pessoa) => {
	conteudo +=`<div class = "card" id = "div-card${pessoa.id}">
					<div class = "card-header">
						<div class="left">
							<img src="${pessoa.profile}" alt="Foto de perfil" class="img-profile">
							<p> ${pessoa.user} </p>
						</div>
						<div>
							<p> . . . </p>
						</div>
					</div>
					<div class = "card-body"  id = "div-card-body${pessoa.id}">
						<img src = "${pessoa.post}" alt = "${pessoa.legenda}">
						<div id="over${pessoa.id}" class = "overlay">
							<img src = "Images/coracao.png" alt = "">
						</div>
					</div>
					<div class="card-footer">
						<div id = "icon${pessoa.id}">
							<i class="lni lni-heart"></i>
							<i class="lni lni-heart-filled"></i>
							
							<img class = "button" src = "Images/Comentar.png" alt = "Faça um comentário">
							<img class = "button" src = "Images/Seta.png" alt = "Seta do Instagram">
							<p><scan>${pessoa.user}</scan>  ${pessoa.legenda}</p>

						</div>
							
						<div>
							<img class = "button" src = "Images/Bandeira.png" alt = "Bandeira do Instagram">
						</div>
					</div>
				</div>`
});

card.innerHTML = conteudo;

