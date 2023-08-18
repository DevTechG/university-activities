<template>
    <div  class="feed" >
       <cardPost :v-for="pessoa" publicacaoNome="mateus"> </cardPost>
    </div>
</template>

<script>
</script>

<style scoped>

    .feed{
        widows: 60%;
        display: flex;
        justify-content: center;
        
    }

</style>
