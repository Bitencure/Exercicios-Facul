
public class Funcionario {
	String cpf, nome;
	double salario;
	static double valeRefeicao = 550.00;
	
	public Funcionario () {
		cpf = null;
		nome = null;
		salario = 0;
		valeRefeicao = 550.00;
	}
	
	public Funcionario (String cpf, String nome, double salario) {
		this.cpf = cpf;
		this.salario = salario;
		this.nome = nome;
	}
	
	public void aumentarSalario(double a) {
		
	}
	
	public String retornarDados() {
		String aux = "";
		aux += "Nome: " + nome;
		aux += "CPF: " + cpf;
		aux += "Salario: " + salario;
		
		return aux;
	}
	
	public void ajustarValeRefeicao(double porcentagem) {
		valeRefeicao += valeRefeicao*(porcentagem * 0.01);
	}
}
