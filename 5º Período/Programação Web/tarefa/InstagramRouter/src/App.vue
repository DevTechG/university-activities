<template>
  <div id="app" class="container">
    <h1>Instagram</h1>
    <button @click="$router.replace({ path: '/perfil' })">Perfil</button>
    <button @click="$router.replace({ path: '/' })">Feed</button>
    <router-view></router-view>
  </div>
</template>

<script>
import router from './router'
//import CardInsta from './components/CardInsta.vue'

export default {
  name: 'App',
  components: {
    //CardInsta
  },
  methods:{
    click(){
      router.replace="/"
    }
  }
}
</script>

<style>
body{
  background: #f9f9f9;
}
.container{
  max-width: 600px;
}

#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
