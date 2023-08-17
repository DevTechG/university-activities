% func(Código, Nome, Salário)
 func(1, ana, 1000.90).
 func(2, bia, 1200.00).
 func(3, ivo, 903.50).
 func(4, leo, 2500.35).
 func(5, clo, 1800.00).
 func(6, gil, 1100.00).
 
% dep(Código, Nome)
dep(1, ary).
dep(3, rai).
dep(3, eva). 
dep(4, lia).
dep(4, noe).
dep(5, eli). 

sal15003000(X) :- func(_,X,Y), Y > 1500, Y < 3000.

semdep(X) :- func(W,X,Y), not(dep(W,_)), Y<1200.

comdep(X) :- func(W,X,Y), dep(W,_), Y>1700.

/*Inclua no Programa 2.2 as informações da tabela abaixo e faça as consultas indicadas a seguir:
Código Nome Salário Dependentes
4 Leo R$ 2500,35 Lia, Noé
5 Clô R$ 1800,00 Eli
6 Gil R$ 1100,00 ------
a) Quem tem salário entre R$ 1500,00 e R$ 3000,00?
b) Quem não tem dependentes e ganha menos de R$ 1200,00?
c) Quem depende de funcionário que ganha mais de R$ 1700,00?
*/