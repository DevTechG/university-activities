/**aluno(Código, Nome, Idade).**/
 aluno(1, "João", 25).
 aluno(2, "Luis", 28).
 aluno(3, "Otávia", 26).
 aluno(4, "Jéssica", 22).
 
/**curs(Código, Curso, Período).**/
curs(1, "BCC", 5).
curs(2, "Química", 8).
curs(3, "BCC", 8). 
curs(4, "Agronomia", 1).

formando(Nome) :- aluno(Codigo, Nome, _), curs(Codigo, _, Periodo), Periodo >= 7.
/** 
?- formando(X).
X = "Luis" ;
X = "Otávia" ;
false.
**/

calouro(Nome) :- aluno(Codigo, Nome, _), curs(Codigo, _, Periodo), Periodo =< 2.

/**
?- calouro(X).
X = "Jéssica".
**/

mais20(Nome) :- curs(Codigo, Curso, _), Curso == "BCC", aluno(Codigo, Nome, Idade), Idade > 20.
/**
?- mais20(X).
X = "João" ;
X = "Otávia" ;
false.
**/

bacharelado(Nome, Curso) :- curs(Codigo, Curso, _), (Curso == "BCC"; Curso == "Agronomia"), aluno(Codigo, Nome, _).
/**
?- bacharelado(X,Y).
X = "João",
Y = "BCC" ;
X = "Otávia",
Y = "BCC" ;
X = "Jéssica",
Y = "Agronomia".
**/

licenciatura(Nome, Curso) :- curs(Codigo, Curso, _), Curso == "Química", aluno(Codigo, Nome, _).
/**
?- licenciatura(X,Y).
X = "Luis",
Y = "Química" ;
false.
**/