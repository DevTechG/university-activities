import Home from '@/views/HomeVisao.vue';
import Sobre from '@/views/SobreVisao.vue';
import VueRouter from 'vue-router';

const rotas = [
    {
        path: '/',
        name: 'home',
        component: Home,
    },{
        path: '/sobre',
        name: 'sobre',
        component: Sobre,
    }
];

const router = new VueRouter({
    routes: rotas
});

export default router;