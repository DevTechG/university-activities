<template>
  <div>
    <header>
        <div class="container" >
          <router-link to="/">
            <img src="@/assets/Imagens/Iporagram.png" alt="Iporágram" >
          </router-link>
      </div>
    </header>
    <div class="container">
      <div class="row">
        <div class="col-md-8">
          <div class="feed">
            <InstagramPost v-for="post in posts" :key="post.id" :id="post.id" :logo="post.logo" :usuario="post.usuario" 
            :img="post.img" :legenda="post.legenda"/>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
  import InstagramPost from './InstagramPost.vue'
  /*import HelloWorld from "./components/HelloWorld.vue";*/

  export default {
    name: 'App',
    components: {
      InstagramPost,
    },

    data () {
      return {
        mostrar : false,
        posts : [{
          id: 1,
          usuario: "jubileu23",
          logo: "logo1.png",
          img: "img1.png",
          legenda: "Relembar é viver"
        },{
          id: 2,
          usuario: "jurema",
          logo: "logo2.png",
          img: "img2.png",
          legenda: "Atreva-se a ser simples!"
        },{
          id: 3,
          usuario: "vasp",
          logo: "logo3.png",
          img: "img3.png",
          legenda: "Não há dias cinzentos para quem sonha colorido."
        },{
          id: 4,
          usuario: "goias_memes",
          logo: "logo4.png",
          img: "img4.png",
          legenda: "Ando devagar porque já tive pressa."
        },{
          id: 5,
          usuario: "chamaaaa",
          logo: "logo5.png",
          img: "img5.png",
          legenda: "'A vida é um baile, você segue ou dança."
        }]
      }
    },

    methods:{
      clicar(posts){
        this.mostrar = !this.mostrar;

        console.log(`Clicou em ${posts.id}`);

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

<style>
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