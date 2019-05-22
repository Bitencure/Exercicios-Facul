
public class Cliente {
	String nome, cpf;
	Conta conta;
	CartaoDeCredito cartao;
	
	//Construtor padrão
	public Cliente() {
		nome = null;
		cpf = null;
		Conta conta = new Conta();
		CartaoDeCredito cartao = new CartaoDeCredito();
	}
	
	//Construtor nome e CPF
	public Cliente(String nome, String cpf) {
		this.nome = nome;
		this.cpf = cpf;
	}

	public String retornarDados() {
		String aux = "";
		aux += "\n Nome: " + this.nome;
		aux += "\n CPF: " + this.cpf;
		aux += "\n Conta: " + conta.numero;
		aux += "\n Saldo: " + conta.saldo;
		aux += cartao.retornarDados();
		return aux;
	}
	
}
