<template>
    <div id="appp">
        <div class="instagram-wrapper">
            <div class="instagram-phone">
                <img src="@/assets/Imagens/novas/instagram-celular.png" alt="celular">
            </div>
        </div>
        <div class="log-in">
          <!--Logo-->
          <img src="@/assets/images/instagram-logo.png" class="logo_ig">
          <!--Log in form-->
          <div class="log-in-form">
            <input type="text" placeholder="Telefone, nome de usuário ou email">
            <input type="passowrd" placeholder="Senha">
            <router-link to="/feed" class="instagram-login">
                <button href="" class="log-in-button" type="submit">Entrar</button>
            </router-link>
          </div>
          <!-- OR divider-->
          <span class="or-divider">ou</span>
          <!--Login no Facebook-->
          <div class="fb-login">
            <a href="#">
                <img class="fb-login_icon" src="@/assets/images/facebook-icon.png">
                <span>Entrar com o Facebook</span>
            </a>
          </div>
          <!--Esqueceu a senha-->
          <a class="forgot_login" href="#" target="_blank">Esqueceu sua senha?</a>
        </div>
        <!--Sign up-->
        <div class="sign-up">
          <span>Não tem uma conta?</span><a href="#" target="_blank">Cadastre-se</a>
        </div>
        <!--Download-->
        <div class="get-the-app">
          <span>Obtenha o Aplicativo.</span>
          <div class="app-images">
            <a href="#"><img src="@/assets/images/googlestore.png" alt="Android"></a>
            <a href="#"><img src="@/assets/images/applestore.png" alt="IOS"></a>
          </div>
        </div>
    </div>
</template>

<script>

</script>

<style scoped>
:root{
    --background-color: #fafafa;
    --white: #ffffff;
    --border-color: 112, 112, 112;
    --placeholder-color: #837979;
    --or-text: #8e8e8e;
    --fb-logo: #385185;
    --log-in-button: #0095f6;
    --black: #262626;
    --footer-links: #1e4f7c;
    --copyright-gray: #bfbfbf;
}

#appp {
    justify-content: center;
    max-width: 935px;
    padding-bottom: 32px;
    width: 80%;
    align-items: center;
}

.instagram-phone{
    padding-left: 10rem;
    display: flex;
    align-items: center;
    justify-content: center;
    width: 20%;
    float: left;
}

.instagram-phone img{
    flex-basis: 380px;
    height: 580px;
    padding-left: 18rem;
    align-items: center;    
}

.log-in{
    display: grid;
    margin-top: 120px;
    max-width: 350px;
    background: white;
    width: 20rem;
    margin: 0 auto;
    border: 0.1rem solid rgba(112, 112, 112);
    padding: 2rem;
    text-align: center;
    margin-left: 35rem;
}


.logo_ig{
    width: 10rem;
    margin-bottom: 1rem;
    display: block;
    margin-left: auto;
    margin-right: auto;
}

.log-in-form{
    display: flex;
    flex-direction: column;
    width: 100%;
}

.log-in-form input, 
.log-in-button {
    padding: 1rem 0 1rem 1rem;
    border-radius: 0.5rem;
}

.log-in-form input, 
.log-in-form input::placeholder{
    font-size: 0.8rem;
}

.log-in-form input{
    background: #fafafa;
    border: 0.1rem solid rgba(112, 112, 112);
    outline: none;
}

.log-in-form input[type="text"]{
    margin-bottom: 0.5rem;
}

.log-in-button{
    background: #0095f6;
    color: white;
    margin: 2rem 0;
    font-weight: 700;
    cursor: pointer;
    outline: none;
    border: none;
    width: 100%;
}

.content_user{
    margin: 1rem 0 0.5rem 0;
}

.content_user, .content_password{
    position: relative;
}

.content_user input, .content_password input{
    display: block;
    padding: 1rem 0.8rem 0.8rem 0.8rem;
    width: 100%;
    max-width: 245px;
    border-radius: 0.2rem;
    border: 1px solid gray;
}

.content_user label, .content_password label{
    font-size: 0.8rem;
    color: gray;
    top: 35%;
    left: 5%;
    position: absolute;
    cursor: text;
    user-select: none;
    transition: 0.3s ease-in-out;
}

.or-divider{
    color: var(--or-text);
    position: relative;
    font-size: 1.2rem;
}

.or-divider::before,
.or-divider::after{
    content: "━━━━━━";
    display: flow;
    margin-left: 1rem;
    margin-right: 1rem;
    width: 11rem;
    height: 0.1rem;
    color: rgba(112, 112, 112);
    top: 50%;
}

.or-divider::before{
    left: 3rem;
    padding-bottom: 10rem;
}

.or-divider::after{
    right: 3rem;
    padding-top: 10rem;
}


.fb-login{
    margin: 1.5rem 0;
}

.fb-login img,
.fb-login span{
    vertical-align: middle;
}

.fb-login img{
    width: 1.5rem;
    margin-right: 0.5rem;
}

.fb-login span{
    font-size: 1.3rem;
    color: #385185;
    font-weight: 700;
}

.fb-login a{
    text-decoration: none;
}

.forgot-password{
    color: #385185;
    font-size: 1.2rem;
    text-decoration: none;
}

.log-in a{
    text-decoration: none;
    color: #385185;
}

.sign-up {
    background: white;
    width: 20rem;
    border: 0.1rem solid rgba(112, 112, 112);
    padding: 2rem;
    text-align: center;
    display: flow-root;
    margin-top: 1rem;
    margin-left: auto;
    margin-right: auto;
    margin-left: 35rem;

}

.sign-up span{
    font-size: 1.2rem;
    text-align: center;
    margin-right: 0.2rem;
}

/**/
.sign-up a{
    font-size: 1.3rem;
    font-weight: 700;
    color: var(--log-in-button);
    text-align: center;
    margin-right: 1rem;
    color: #0095f6;
}


.get-the-app{
    display: flex;
    flex-direction: column;
    align-items: center;
    width: 80rem;
    padding-left: 50rem auto;
    margin-top: 1.5rem;
    padding-left: 7rem;
}

.get-the-app span{
    display: block;
    margin-bottom: 2rem;
    font-size: 1.4rem;
}

.app-images img{
    width: 9rem;
}

.app-images img:nth-child(1){
    margin-right: 1rem;
}
</style>