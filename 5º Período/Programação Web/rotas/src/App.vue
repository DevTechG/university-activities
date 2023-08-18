<template>
  <div id="app">
      <!--<header>

      <div class="container" >
        <router-link to="/">
          <img src="./assets/Imagens/Iporagram.png" alt="Iporágram" >
        </router-link>
      </div>

      <router-link to="/">
        <button type="button" name="button" class="botao">Home</button>
      </router-link>

      <router-link to="/pageA">
        <button type="button" name="button" class="botao">Posts</button>
      </router-link>

      <router-link to="/telaLogin">
        <button type="button" name="button" class="botao">TelaLogin</button>
      </router-link>

    </header>-->
    <router-view></router-view>

  </div>

</template>

<script>
  //import InstagramPost from './components/InstagramPost.vue'
  /*import HelloWorld from "./components/HelloWorld.vue";*/

  export default {
    name: 'App',
    components: {
     // InstagramPost,
    }
  }
</script>

<style scoped>
  #app{
    background: #f9f9f9;
  }

  /*header{
    padding: 15px;
    background: #fff;
    border-bottom: 1px solid #ddd;
    display: flex;
    align-items: center;
  }

  header img{
    max-height: 30px;
  }

  .container{
    max-width: 960px;
  }*/

</style>
