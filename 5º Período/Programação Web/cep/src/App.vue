<template>
  <div class="container" id="app">
    <h3 class="title is-1">CEP: {{cep}}</h3>

    <hr>

    <!--<input type="text" v-model="cep">-->
    <label>
      CEP: 
      <input type="text" placeholder="Digite o CEP aqui" v-model="cep">
    </label>
    
    
    <label>
      Logradouro: 
      <input type="text" disabled="" placeholder="Logradouro" id="logradouro" v-model="logradouro">
    </label>

    <label>
      Bairro: 
      <input type="text" disabled="" placeholder="Bairro" id="bairro" v-model="bairro">
    </label>

    <label>
      Cidade: 
      <input type="text" disabled="" placeholder="Cidade" id="localidade" v-model="localidade">
    </label>

    <label>
      UF: 
      <input type="text" disabled="" placeholder="UF" id="uf" v-model="uf">
    </label>

    <label>
      DDD: 
      <input type="text" disabled="" placeholder="DDD" id="ddd" v-model="ddd">
    </label>
    
    <label>
      IBGE: 
      <input type="text" disabled="" placeholder="IBGE" id="ibge" v-model="ibge">
    </label>

    <button class="btn_buscar" @click="clickUsuario()">Buscar</button>
    <button class="btn_limpar" @click="limpar()">Limpar</button>

  </div>
</template>

<script>
/*import HelloWorld from './components/HelloWorld.vue'*/
import axios from "axios";

export default {
  name: 'App',
  components: {
    /*HelloWorld*/
  },
  data() {
    return {
      cep: null,
      logradouro: null,
      bairro: null,
      localidade: null,
      uf: null,
      ddd: null,
      ibge: null
    }
	},
	methods : {
		clickUsuario(){
      axios.get(`https://viacep.com.br/ws/${this.cep}/json/`)
      .then((resposta) => {
        console.log(resposta.data);
        /*alert(`CEP: ${resposta.data.cep}`);
        alert(`Rua: ${resposta.data.logradouro}`);
        alert(`Bairro: ${resposta.data.bairro}`);
        alert(`Cidade: ${resposta.data.localidade}`);
        alert(`Estado: ${resposta.data.uf}`);
        alert(`DDD: ${resposta.data.ddd}`);
        alert(`IBGE: ${resposta.data.ibge}`);  */
        this.logradouro = resposta.data.logradouro;
        this.bairro = resposta.data.bairro;
        this.localidade = resposta.data.localidade;
        this.uf = resposta.data.uf;
        this.ddd = resposta.data.ddd;
        this.ibge = resposta.data.ibge;

        if(resposta.data.localidade == "Iporá"){
          alert(`O Baratão Shopping reliza entregas no CEP ${resposta.data.cep}`);
        }
        else{
          alert(`O Baratão Shopping não reliza entregas no CEP ${resposta.data.cep}`);
        }

        });

        setTimeout(() => {
          this.limpar();
        },10000);
    },

    limpar(){
      this.cep = "";
      this.logradouro = "";
      this.bairro = "";
      this.localidade = "";
      this.uf = "";
      this.ddd = "";
      this.ibge = "";
    }
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

input {
  
}

label {
display: block;
  margin: 10px auto;
}

button {
  display: block;
  margin: 10px auto;
}
</style>
