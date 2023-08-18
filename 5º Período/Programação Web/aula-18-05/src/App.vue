<template>
  <div id="app">
    <h1> {{cepUsuario}} </h1>
   <input type = "text" v-model="cepUsuario" /> 
  </div>
</template>

<script>
import axios from 'axios';

export default {
  name: 'App',
  data() {
    return {
      cepUsuario:  null
    }
  },
  components: {
    },
  created() {
    this.obterInformacoes();
  },
  methods: {
    obterInformacoes() {
      axios
      .get('https://viacep.com.br/ws/74013010/json/')
      .then((resposta) => {
        console.log(resposta.data);
        alert(`A rua é ': ${resposta.data.logradouro}`)
      });
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
</style>
