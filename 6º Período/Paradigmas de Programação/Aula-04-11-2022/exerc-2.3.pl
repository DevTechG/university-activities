%filme(Título, Gênero, Ano, Duração)
filme('Uma linda mulher', romance, 1990, 119).
filme('Sexto sentido', suspense, 2001, 108).
filme('A cor purpura', drama, 1985, 152).
filme('Copacabana', comedia, 2001, 92).
filme('E o vento levou', drama, 1939, 233).
filme('Carrington', romance, 1995, 130). 

longo(X) :- filme(X,_,_,Y), Y > 150.
lanc(X) :-  filme(X,_,Y,_), Y == 2001.


/*Inclua no Programa 2.3 as seguintes regras:
a) Um filme é longo se tem duração superior a 150 minutos.
b) Um filme é lançamento se foi lançado a menos de 1 ano. 
*/