import VueRouter from 'vue-router';
import Feed from '@/views/feedVisao.vue';
import Perfil from '@/views/perfilVisao.vue';

const rotas = [
    {
        path: '/',
        name: 'feed',
        component: Feed,
    },{
        path: '/perfil',
        name: 'perfil',
        component: Perfil,
    }
];

const router = new VueRouter({
    routes: rotas
});

export default router;