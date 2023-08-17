pai(ivo, eva).
pai(ary, gal).
pai(gil, rai).
pai(gil, clo).
pai(gil, ary).
pai(rai, noe).


mae(ana, eva).
mae(bia, rai).
mae(bia, clo).
mae(bia, ary).
mae(eva, noe).
mae(lia, gal).

homem(ivo).
homem(ary).
homem(gil).
homem(rai).
homem(noe).

mulher(ana).
mulher(bia).
mulher(eva).
mulher(clo).
mulher(lia).
mulher(gal).

%Gerou pai e mãe
gerou(X,Y) :- pai(X, Y); mae(X, Y).

%Irmão
irmao(X,Y) :- pai(Z, X), pai(Z, Y), X \= Y. 

%Filho
filho(X,Y) :- gerou(X, Y), homem(Y).

%Filha
filha(X,Y) :- gerou(X, Y), mulher(Y).

%Tio
tio(Y,W) :- gerou(X,W), irmao(X, Y), homem(Y).

%Tia
tia(Y,W) :- gerou(X, W), irmao(X, Y), mulher(Y).
tia(X, Y) :- mulher(X), casal(X, W), irmao(W, Z), gerou(Z, Y).

%Tios
tios(W,Y) :- gerou(X,W), irmao(X,Y).

%Filhos 
filhos(X,Y) :- gerou(X, Y).

%Primo
primo(X, Y) :- tios(X, W), filhos(W, Y), homem(X).

%Prima
prima(X, Y) :- tios(X, W), filhos(W, Y), mulher(Y).

%Avô
avoh(X,Y) :- gerou(W, Y), pai(X,W).

%Avó
avom(X,Y) :- gerou(W, Y), mae(X,W).

%Todo mundo que tem filhos é feliz. 
feliz(X) :- gerou(X, _).

%Um casal é formado por duas pessoas que têm filhos em comum. 
casal(X,Y) :- gerou(X, W), gerou(Y, W).

/** 
?- filho(ivo,X).
false.

?- filha(gil,X).
X = clo ;
false.

?- tio(noe,X).
X = ary ;
false.

?- tia(noe,X).
X = clo ;
false.

?- primo(noe,X).
false.

?- prima(noe,X).
X = gal ;
false.

?- avoh(X, noe).
X = gil ;
X = ivo.

?- avom(X,noe).
X = bia ;
X = ana.

?- feliz(noe).
false.

?- feliz(ana).
true.

?- feliz(ivo).
true 

?- feliz(X).
X = ivo ;
X = ary ;
X = gil ;
X = gil ;
X = gil ;
X = rai ;
X = ana ;
X = bia ;
X = bia ;
X = bia ;
X = eva ;
X = lia.

?- casal(ivo,X).
X = ivo ;
X = ana ;
false.

?- 

?- casal(ivo,eva).
false.

?- casal(ivo,ana).
true .


*/
