<template>
  <div id="app">

    <router-view>
      
    </router-view>
    
  </div>
</template>

<script>

import axios from "axios";
export default {
  name: 'App',
  components: {
  
   
  
  },
  data(){
    return{
    
    }
  },

  methods:{
    obterInformacoes(){
      axios
      .get(`https://viacep.com.br/ws/76200000/json/`)
      .then(respost=>{

        if(respost.data.cep != '76200-000'){
          alert("endereço nao pertence a ipora");
          console.log(respost.data.localidade)
        }else{
          console.log(respost.data)
        }
      })
    },

    

  },
  created(){
    this.obterInformacoes()
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
