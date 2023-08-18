<?php 

public function listar() {
	$comentarios = Comment::all();
	return response($comentarios,200);
}

public function criar(Request $request) {
	$comentario = new Comment();
	$comentario->text = $request->text;
	$s = $comentario->save();
	if ($s) {
		return response("Ok",201);
	}
	return response ("Deu ruim",400);
}

$arquivo = $arquivo->store('imgs');
$post ->url = $request->$arquivo->store('imgs');
?> 