import Vue from 'vue'
import App from './App.vue'
import VueRouter from 'vue-router';
import InstagramPost from './components/InstagramPost.vue';
import Feed from './components/Feed.vue';
import TelaLogin from './components/TelaLogin.vue';

Vue.use(VueRouter);

const router = new VueRouter({
    routes: [
        {
            path: '/instagramPost',
            component: InstagramPost,
        },{
            path: '/feed',
            component: Feed,
        },{
            path: '/',
            component: TelaLogin,
        }
    ],
})

Vue.config.productionTip = false

new Vue({
    router,
    render: h => h(App),
  }).$mount('#app')
  