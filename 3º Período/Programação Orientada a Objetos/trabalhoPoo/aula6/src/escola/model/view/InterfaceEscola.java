package escola.model.view;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.table.TableModel;

import ecola.model.controller.EstudanteController;
import escola.model.bean.Estudante;
import escola.model.dao.EstudanteDAO;

import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JTable;
import java.awt.Color;
import java.awt.Component;

import javax.swing.JOptionPane;
import java.util.ArrayList;
import java.util.List;
import java.beans.PropertyChangeListener;
import java.beans.PropertyChangeEvent;
import javax.swing.table.DefaultTableModel;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JComboBox;



public class InterfaceEscola extends JFrame {

	private JPanel contentPane;
	private JTable tableAlunos;
	private JTextField textNome;
	private JTextField textIdade;
	private JTextField textID;
	private JTextField textField;
	private JButton btnPesquisar;
	private JTextField textPesquisaId;

	/**
	 * Launch the application.
	 * 
	 * 
	 */
	
	Estudante estudante = new Estudante();
	EstudanteController estudanteController = new EstudanteController();
	
	
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					InterfaceEscola frame = new InterfaceEscola();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public InterfaceEscola() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 1056, 648);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		tableAlunos = new JTable();
		
		tableAlunos.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
			}
		});
		
		tableAlunos.setModel(new DefaultTableModel(
			new Object[][] {
			},
			new String[] {
				"Id", "Idade", "Nome"
			}
		));
		tableAlunos.setBounds(10, 265, 1020, 333);
		contentPane.add(tableAlunos);
		
		JLabel lbNome = new JLabel("Nome");
		lbNome.setBounds(10, 11, 67, 26);
		contentPane.add(lbNome);
		
		textNome = new JTextField();
		textNome.setBounds(106, 14, 105, 20);
		contentPane.add(textNome);
		textNome.setColumns(10);
		
		JLabel lbIdade = new JLabel("Idade");
		lbIdade.setBounds(10, 48, 46, 14);
		contentPane.add(lbIdade);
		
		textIdade = new JTextField();
		textIdade.setBounds(106, 48, 105, 20);
		contentPane.add(textIdade);
		textIdade.setColumns(10);
		
		JLabel lbId = new JLabel("Id");
		lbId.setBounds(10, 94, 46, 14);
		contentPane.add(lbId);
		
		textID = new JTextField();
		//textID.setText("");
		textID.setBounds(106, 91, 105, 20);
		contentPane.add(textID);
		textID.setColumns(10);
		
		textField = new JTextField();
		textField.setBounds(901, 288, -801, -131);
		contentPane.add(textField);
		textField.setColumns(10);
		
		btnPesquisar = new JButton("Pesquisar");
		btnPesquisar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				estudante.setId(Integer.parseInt(textPesquisaId.getText()));
				estudante = (Estudante) estudanteController.executa(estudante,4);
				

				textNome.setText(estudante.getNome());
				textIdade.setText(Integer.toString(estudante.getIdade()));
				textID.setText(Integer.toString(estudante.getId()));
				
			}
		});
		btnPesquisar.setBounds(106, 154, 89, 23);
		contentPane.add(btnPesquisar);
		
		textPesquisaId = new JTextField();
		textPesquisaId.setBounds(14, 155, 86, 20);
		contentPane.add(textPesquisaId);
		textPesquisaId.setColumns(10);
		
		JButton btnCriar = new JButton("Add");
		btnCriar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				estudante.setNome( textNome.getText().toString());
				estudante.setIdade(Integer.parseInt(textIdade.getText()));
				estudanteController.executa(estudante,1);
				
				preecherTabela();
				
			}
		});
		btnCriar.setForeground(Color.GREEN);
		btnCriar.setBounds(304, 13, 89, 23);
		contentPane.add(btnCriar);
		
		JButton btnExcluir = new JButton("Excluir ID");
		btnExcluir.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
			estudante.setId(Integer.parseInt(textID.getText()));
			estudanteController.executa(estudante, 3);
			preecherTabela();
				
			}
		});
		btnExcluir.setForeground(Color.RED);
		btnExcluir.setBounds(304, 58, 89, 23);
		contentPane.add(btnExcluir);
		
		JButton btnAtualizar = new JButton("Atualizar");
		btnAtualizar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				estudante.setId(Integer.parseInt(textID.getText()));
				estudante.setNome( textNome.getText().toString());
				estudante.setIdade(Integer.parseInt(textIdade.getText()));
				
				estudanteController.executa(estudante,2);
				
				preecherTabela();
			}
		});
		btnAtualizar.setBounds(304, 107, 89, 23);
		contentPane.add(btnAtualizar);
		
		preecherTabela();
	}
	
	
	private void preecherTabela() {
		DefaultTableModel modelo = (DefaultTableModel)tableAlunos.getModel();
		ArrayList dadosEstudantes = new ArrayList();
		EstudanteDAO eDAO1 = new EstudanteDAO();
		dadosEstudantes = (ArrayList) eDAO1.getAll();
		
		modelo.setRowCount (0);
		for(Object eLista: eDAO1.getAll()) {
			modelo.addRow(new Object [] {
					((Estudante) eLista).getId(),
					((Estudante) eLista).getIdade(),
					((Estudante) eLista).getNome() });
		}
	
	}
	
	
}
