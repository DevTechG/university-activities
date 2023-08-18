package ecola.model.controller;

import escola.model.bean.Estudante;
import escola.model.dao.EstudanteDAO;
import java.util.ArrayList;
import java.util.List;

public class EstudanteController implements IController {
	
	@Override
	public Object executa(Object view, int parameter) {
		EstudanteDAO estudanteDAO = new EstudanteDAO();
		Estudante estudante = new Estudante();
		
		estudante = (Estudante) view;
		
		if(parameter == 1) {
			estudanteDAO.salvar(estudante);
			return null;
		}if (parameter == 2) {
			estudanteDAO.atualizar(estudante);
			return null;
		}
		if (parameter == 3) {
			estudanteDAO.apagar(estudante.getId());
			return null;
			// id
		}
		if (parameter == 4) {
			 estudante =   (Estudante) estudanteDAO.getById(estudante.getId()); 
			return estudante;
			//id
		}
		if (parameter == 5) {
			List<Object> estudantes = new ArrayList<Object>();
			estudantes = estudanteDAO.getAll();
			return estudantes;
			
		}
		return estudante;
	}
}
