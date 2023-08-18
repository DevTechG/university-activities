<template>
    <div>
        
        <button @click="clicar()">click</button>
        <h1 v-if="mostrar">{{ texto }}</h1>
        
    </div>
</template>


<script>
    export default{
        data(){
            return{
                mostrar: true,
            }
        }
        ,
        props:{
            texto: String,
        }
        ,
        methods:{
            clicar(){
                //alert("Teste");
                this.mostrar = !this.mostrar;
            },
            clicado(){
                alert("Outro Teste")
            }
        }
    }
</script>


<style scoped>
</style>