<template>
  <div id="app" class="container">
    <CardInsta nome="Nome 1" foto="pessoa1.jpg" post="https://i.pinimg.com/474x/8c/27/5e/8c275e8b6fa0c54cb05c59e88cf61a8a--rio-movie-hd-backgrounds.jpg"/>
    <CardInsta nome="Nome 2" foto="pessoa2.jpg" post="https://i.pinimg.com/originals/fa/4f/f1/fa4ff149fe30f4ab8747519201beec97.png"/>
    <CardInsta nome="Nome 3" foto="pessoa3.jpg" post="https://w1.pngwing.com/pngs/491/824/png-transparent-rio-bird-nigel-blu-bia-film-character-animation-blue-sky-studios-thumbnail.png"/>
    <CardInsta nome="Nome 4" foto="pessoa4.jpg" post="https://i0.wp.com/i.pinimg.com/originals/f3/13/bd/f313bdc6af3ec34d3df7826ef99f58cc.jpg?resize=160,120"/>
  </div>
</template>

<script>
import CardInsta from './components/CardInsta.vue'

export default {
  name: 'App',
  components: {
    CardInsta
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
