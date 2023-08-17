%pessoa(Nome, Sexo, Idade, Altura, Peso)
pessoa('Ana', fem, 23, 1.55, 56.0).
pessoa('Bia', fem, 19, 1.71, 61.3).
pessoa('Ivo', masc, 22,1.80, 70.5).
pessoa('Lia', fem, 17,1.85, 57.3).
pessoa('Eva', fem, 28,1.75, 68.7).
pessoa('Ary', masc, 25,1.72, 68.9).

mulheres20(X, Y) :- pessoa(X, W, Y, _, _), W == fem, Y > 20.
menos65(X, Y, Z) :- pessoa(X, _, _, Y, Z), Y < 1.70, Z < 65.
casaisHomemMaior(X, W, Z, B) :- pessoa(X, Y, _, W, _), pessoa(Z, A, _, B, _), Y == masc, W > B, A == fem. 

modelo(N, S, I, A, P, X) :- pessoa(N, S, I, A, P), S == fem, I < 25, A > 1.70, X is 62.10 * A - 44.70, P =< X.

/*Codifique um programa contendo as informações da tabela abaixo e faça
as consultas indicadas a seguir: 
a) Quais são as mulheres com mais de 20 anos de idade?
b) Quem tem pelo menos 1.70m de altura e menos de 65kg?
c) Quais são os possíveis casais onde o homem é mais alto que a mulher?
*/
/*. O peso ideal para uma modelo é no máximo 62.1*Altura–44.7 . Além
disso, para ser modelo, uma mulher precisa ter mais que 1.70m de altura e menos de 25 anos de idade. Com base nessas informações, e considerando a tabela do exercício anterior, defina um predicado capaz de recuperar apenas os nomes das mulheres que podem ser modelos.*/
