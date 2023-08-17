/*% país(Nome, Área, População)*/
pais(brasil, 9, 130).
pais(china, 12, 1800).
pais(eua, 9, 230).
pais(india, 3, 450). 
 
dens(P,D) :- pais(P,X,Y), D is Y/X.

maisPop(W,Z) :- pais(W,_,X), pais(Z,_,Y), X > Y. 

/*
2.1. Inclua no Programa 2.1 uma regra para o predicado dens(P,D), que
relaciona cada país P à sua densidade demográfica correspondente D.
Em seguida, faça consultas para descobrir:

a) qual a densidade demográfica de cada um dos países;

b) se a Índia é mais populosa que a China. 
*/
