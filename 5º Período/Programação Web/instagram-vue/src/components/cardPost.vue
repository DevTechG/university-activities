<template>
     <div class="card" :class="{ curtido: like }">
        <div class="card-header bg-transparent ">
            <div>
                <img class="perfil" :src="foto" alt=""/>

                <h3 class="username">{{publicacaoNome}}</h3>
            </div>
            

            <i class="lni lni-more-alt"></i>
        </div>
        <div class="card-body "  @click="clicado">
            <img class="post"  :src="foto" alt="Pessoa">
            <div  class="overlay" :class="{ exibir: exibir }">
                <img src= '../assets/coracao.png' alt="">
            </div>
        </div>
        <div class="card-footer bg-transparent">
            
            <div class="icon" @click="clicado"  >
                <i class="lni lni-heart"></i>
                <i class="lni lni-heart-filled"></i>
            </div>

            <p class="descricao">{{publicacaoDescricao}}</p>
        </div>
    </div>
</template>

<script>

    export default{

        name:"cardPost",
        
        data(){
            return{
                like : false,
                exibir: false,
            }
           
         },
         methods:{

             clicado(){

                 this.like = !this.like;
                
                if(this.like == true){
                this.exibir = !this.exibir;
                 
                 
                setTimeout(()=>{
                     this.exibir = !this.exibir;
                }, 600)
                }
                
             },

              
         },
        props:{
            
            publicacaoNome : String,
            foto: String,
            publicacaoDescricao: String,
            

        }
    }
    
</script>

<style scoped>
   
.card{    
    margin: 20px 0px;
    max-width: 500px;
    border: solid 1px rgb(201, 201, 201);
    border-radius: 10px;
    padding: 15px 5px;
    background: #fff;

}

.card-header{
    background: #fff;
    display: flex;
    justify-content: space-between;
    margin: 0 10px 10px ;

}

.card-header div{
    width: 180PX;
    display: flex;
    align-items: center;
    
}

.card-header div h3{
    font-size: 15PX;
    margin-left: 15px;
 
}

.card-header i{
    display: flex;
    align-items: center;

}




.card-header img{
    
    width: 50px;
    height: 50px;
    border-radius: 50%;
}

.card-body{
    padding: 0;
    position: relative;
}

.card-body .overlay{
    opacity: 0;
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.6);
    transition: 600ms;
    display: flex;
    align-items: center;
    justify-content: center;
}

.card-body .overlay img{
    width: 25%;
}

.card-body .overlay.exibir{
    opacity: 1;
}

.card-body>img{
    width: 100%
}

.card-footer{
    background: #fff;
    display: flex;
    align-items: center;
    margin: 0 10px 10px;
    
    
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


.card-footer p{
    margin-left: 15px;
    margin-bottom: 0;
}
</style>
