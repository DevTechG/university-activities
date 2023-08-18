<template>
    <div class="card">
        <div class="card-header">
            <img :src="foto" alt="" class="perfil">
            <p class="nome">{{ nome }}</p>
        </div>
        <div class="card-body">
            <img :src="post" class="image" @dblclick="click2()">
             <svg :class="{ mostrar: coracao }" id="coracao" fill="#000000" width="62" height="62" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 64 64" style="enable-background:new 0 0 64 64;" xml:space="preserve" class="coracao">
                <path d="M32,57.6c-0.8,0-1.6-0.3-2.2-0.8c-2.3-2-4.6-3.9-6.6-5.6l0,0c-5.8-4.9-10.9-9.2-14.4-13.4C4.8,33,3,28.6,3,23.7 c0-4.7,1.6-9.1,4.6-12.3c3-3.2,7.1-5,11.6-5c3.3,0,6.4,1.1,9.1,3.1c1.1,0.8,2,1.8,2.9,2.9c0.4,0.5,1.1,0.5,1.5,0 c0.9-1.1,1.9-2,2.9-2.9c2.7-2.1,5.8-3.1,9.1-3.1c4.5,0,8.6,1.8,11.6,5c3,3.2,4.6,7.6,4.6,12.3c0,4.9-1.8,9.3-5.8,14 c-3.5,4.2-8.6,8.5-14.4,13.4c-2,1.7-4.3,3.6-6.6,5.6C33.6,57.3,32.8,57.6,32,57.6z"/>
            </svg>
        </div>
        <div class="card-footer">
           <div>
                <svg id="like" @click="click1()" :class="{ liked: curtido }" fill="#000000" width="24" height="24" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 64 64" style="enable-background:new 0 0 64 64;" xml:space="preserve" class="_8-yf5 icon-footer reset">
                <path d="M32,57.6c-0.8,0-1.6-0.3-2.2-0.8c-2.3-2-4.6-3.9-6.6-5.6l0,0c-5.8-4.9-10.9-9.2-14.4-13.4C4.8,33,3,28.6,3,23.7 c0-4.7,1.6-9.1,4.6-12.3c3-3.2,7.1-5,11.6-5c3.3,0,6.4,1.1,9.1,3.1c1.1,0.8,2,1.8,2.9,2.9c0.4,0.5,1.1,0.5,1.5,0 c0.9-1.1,1.9-2,2.9-2.9c2.7-2.1,5.8-3.1,9.1-3.1c4.5,0,8.6,1.8,11.6,5c3,3.2,4.6,7.6,4.6,12.3c0,4.9-1.8,9.3-5.8,14 c-3.5,4.2-8.6,8.5-14.4,13.4c-2,1.7-4.3,3.6-6.6,5.6C33.6,57.3,32.8,57.6,32,57.6z"/>
                </svg>

                <svg  class="8-yf5 reset icon-footer" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns="http://www.w3.org/2000/svg" aria-label="Compartilhar publicação" color="#262626" fill="#262626" height="24" role="img" viewBox="0 0 24 24" width="24"><line fill="none" stroke="#262626" stroke-linejoin="round" stroke-width="2px" x1="22" x2="9.218" y1="3" y2="10.083"></line><polygon fill="none" points="11.698 20.334 22 3.001 2 3.001 9.218 10.084 11.698 20.334" stroke="#262626" stroke-linejoin="round" stroke-width="2px" ></polygon>
                </svg>

                <svg class="8-yf5 reset icon-footer" xmlns: xlink="http://www.w3.org/1999 xlink" xmlns="http://www.w3.org/2000/svg" aria-label="Comentar" color="#262626" fill="#262626" height="24" role="img" viewBox="0 0 24 24" width="24">
                    <path d="M20.656 17.008a9.993 9.993 0 10-3.59 3.615L22 22z" fill="none" stroke="#262626" stroke-linejoin="round" stroke-width="2px">
                    </path>
                </svg>
           </div>
           <div>
               <p v-for="index in 10" :key="index"></p>
           </div>

            <div class="comentarios">
                <img :src="foto" alt="" class="perfil">
                <input  type="text" class="input-comentarios" v-model="texto" />
                <svg @click="comments()" class="8-yf5 reset icon-footer" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns="http://www.w3.org/2000/svg" aria-label="Compartilhar publicação" color="#262626" fill="#262626" height="24" role="img" viewBox="0 0 24 24" width="24"><line fill="none" stroke="#262626" stroke-linejoin="round" stroke-width="2px" x1="22" x2="9.218" y1="3" y2="10.083"></line><polygon fill="none" points="11.698 20.334 22 3.001 2 3.001 9.218 10.084 11.698 20.334" stroke="#262626" stroke-linejoin="round" stroke-width="2px" ></polygon>
                </svg>
            </div>
        </div> 
    </div>
</template>


<script>
    export default{
        data(){
            return{
            curtido:false,
            coracao:true,
            texto: null,
            }
        },
        props:{
            nome: String,
            foto: String,
            post: String,
             
            
        },
        methods:{
            click1(){
                this.curtido = !this.curtido;
                
            },
            click2(){
                this.curtido = true;
                this.coracao = !this.coracao;
                setTimeout(()=>{this.mostrar()}, 1000);
            },
            mostrar(){
                this.coracao = !this.coracao;
            },
            comments(){
                let comentario = this.texto;
                let nome = this.nome;

                this.comentarios.push({
                    nome: nome,
                    comentario: comentario
                });

                //alert(nome +" diz: "+ comentario);
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
        padding: 15px;
        border-bottom: 1px solid #ddd;
        border-top: 1px solid #ddd;
        border-left: 1px solid #ddd;
        border-right: 1px solid #ddd;
        position: relative;
        display: flex;
        align-items: center;
    }
    .card-header p{
        margin-bottom: 0;
        margin-top: 0;
    }
    .perfil{
        max-width: 35px;
        max-height: 35px;
        border-radius: 20px;
    }
    .nome{
        text-transform: lowercase;
        margin-top: 5px;
        margin-left: 10px;
        font-weight: 500;
    }
    .image{
        width: 100%;
        height: 700px;
    }
    .nome{
    text-transform: lowercase;
    margin-top: 5px;
    margin-left: 10px;
    font-weight: 550;
    }
    .card-body{
        background: #fff;
        padding: 15px;
        border-bottom: 1px solid #ddd;
        border-left: 1px solid #ddd;
        border-right: 1px solid #ddd;
        position: relative;
        display: flex;
    }
    .card-footer{
    background: #fff;
    position: relative;
    border-bottom: 1px solid #ddd;
    border-left: 1px solid #ddd;
    border-right: 1px solid #ddd;
    display: flex;
    align-items: start;
    flex-direction: column;
    }
    .card-footer :first-child{
        margin-left: 0px;
    }
    .icon-footer{
    cursor: pointer;
    margin-left: 10px;
    }
    .reset{
    fill: white;
    stroke: black;
    stroke-width: 3;
    }
    .liked{
    fill: #ED4956;
    stroke: #ED4956;
    stroke-width: 3;
    }
    .coracao{
    fill: #ED4956;
    stroke: #ED4956;
    stroke-width: 5;
    position: absolute;
    left: 50%;
    right: 50%;
    bottom: 50%;
    top: 50%;
    transition: 1s;
    }
    .mostrar{
        display: none;
    }
    .comentarios{
        width: 100%;
        display: flex;
        align-items: center;
    }
    .input-comentarios{
        margin-left: 1%;
        width: 90%;
    }
    </style>