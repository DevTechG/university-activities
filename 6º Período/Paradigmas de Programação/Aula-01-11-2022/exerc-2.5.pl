teste(10, 600).

animal(cao).
animal(canario).
animal(cobra).
animal(morcego).
animal(gaivota).
voa(canario).
voa(morcego).
voa(gaivota).
dif(X,X) :- !, fail.
dif(_,_).

passaro(X) :- animal(X), voa(X), dif(X,morcego).

f(X,0) :- X<5, !. % cláusula 1
f(X,1) :- X>=5, X=<9, !. % cláusula 2
f(X,2) :- X>9.

num(N,positivo) :- N>0, !.
num(0,nulo) :- !.
num(N,negativo) :- N<0, !. 

t(X, Y, Z) :- teste(X, Z), Y is 62.10 * X - 44.70, Z < Y.

/*
?- passaro(X).
X = canario ;
X = gaivota.
*/