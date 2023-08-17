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

num(N,positivo) :- N>0, !.
num(0,nulo) :- !.
num(N,negativo) :- N<0, !. 

/*
?- passaro(X).
X = canario ;
X = gaivota.
*/