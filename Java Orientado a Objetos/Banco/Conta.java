
public class Conta {
	int numero;
	double saldo, limite;
	
	public void sacar (double valor) {
		saldo -= valor;
		System.out.println("Voce sacou: " + valor + "Reais.");
	}
	
	public void depositar(double valor) {
		saldo += valor;
		System.out.println("Voce depositou: " + valor + "Reais.");
	}
	
	public double consultarSaldo() {
		return saldo;
	}
	
	public String gerarExtrato() {
		String aux = "";
		aux = "Extrato de hoje: " + saldo;
		return aux;
	}
	
	public String gerarExtrato(int dias) {
		String aux = "";
		aux = "Extrato dos" + dias + "ultimos dias: " + saldo;
		return aux;
	}
	
	public void transferir(Conta destino, double valor) {
		sacar(valor);
		destino.depositar(valor);
	}
}
