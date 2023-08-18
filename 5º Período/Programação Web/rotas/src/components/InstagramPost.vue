<template>
    <div class="card" :class="{ curtido: curtido}">
        <div class="card-header">
            <img class="logo" :src="require(`@/assets/Imagens/${logo}`)" alt="Logo" />
            <p class="usuario">{{usuario}}</p>
            <a href="#" class="botao_ponto"> ... </a>
        </div>
        <div class="card-body">
            <img :src="require(`@/assets/Imagens/${img}`)" alt="Imagem" />
            <div class="overlay" @click="clicar(id)" :class="{ exibir: mostrar}" id="coracao${post.id}">
                <img src="./../assets/Imagens/coracao.png" alt="Post">
            </div>
        </div>
        <div class="card-footer">
            <div class="card-footerr">
                <div id="botoes" @click="clicar(id)" class="botoes_instagram" >
                    <i class="lni lni-heart" ></i>       
                    <i class="lni lni-heart-filled" v-if="curtido"></i>                  
                </div>
            </div>
            <p class="usuario_legenda">
                <span class="usuario">
                    {{usuario}}
                </span>
                <span class="legenda">
                    {{legenda}}
                </span>
            </p>
        </div>
    </div>
</template>

<script>
    export default {
        name: 'InstagramPost',
        data () {
            return {
                mostrar : false,
                curtido: false,
            }
        },
        props: {
            id: Number,
            logo: String,
            usuario: String,
            img: String,
            legenda: String,
        },
        methods:{
            /*mudarCoracao(posts) {
                let elemento = document.getElementById(nome);
                elemento.classList.toggle("curtido");
            },*/

            clicar(posts){
                this.mostrar = !this.mostrar;
                this.curtido = !this.curtido;

                console.log(`Clicou em ${posts}`);

                setTimeout(() => {
                    this.mostrar = !this.mostrar;
                },1000);
            },
            
            curtir(posts) {
                alert(`Clicou em ${posts.id}`);
            }
        }
    }
</script>

<style scoped>
.card{    
    margin: 20px 0px;
}

.card-header{
    background: #fff;
        border: 1px solid rgb(160, 158, 158);
}

.card-body{
    padding: 0;
    position: relative;
        border: 1px solid rgb(160, 158, 158);
}

.card-body .overlay{
    opacity: 0;
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.6);
    transition: 1s;
    display: flex;
    align-items: center;
    justify-content: center;
}

.card-body .overlay img{
    width: 50%;
}

.card-body .overlay.exibir{
    opacity: 1;
}

.card-body>img{
    width: 100%
}

.card-footer{
    background: #fff;
        border: 1px solid rgb(160, 158, 158);
}

.card-footer i{
    font-size: 1.3rem;
}

.card:not(.curtido) .lni-heart-filled{
    display: none;
}

.card.curtido .lni-heart{
    display: none;
}

.card.curtido .lni-heart-filled{
    display: initial;
    color: red;
}

.logo{
    width: 60px;
    height: 60px;
    border-radius: 50%;
    border: 3px solid transparent;
    background: 
    linear-gradient(to right, white, white), 
    linear-gradient(to right, #c20d7c , #ffbb00); 
    background-clip: padding-box, border-box;
    background-origin: padding-box, border-box;
    margin-right: 15px;

}

.usuario{
    display: inline-block;
}

.botao_ponto{
    /*flex-direction: column;
    display: inline-flex;
    justify-content: center;  
    padding: 0% 0% 0% 70%;*/ 
    padding: 2% 0% 0% 0%;
    float: right;
    text-decoration: none;
    color: gray;
}

.botoes_instagram .botoes_instagram1{
    width: 40px;
    height: 40px;
    display: inline-block;

}

.botoes_instagram .botoes_instagram2{
    width: 40px;
    height: 40px;
    /*justify-content: center;  
    padding: 0% 0% 0% 30%;*/
    float: right;
    display: inline-block;
}

.usuario{
    font-weight: 600;
}

#post{
    position:relative;
}
</style>
