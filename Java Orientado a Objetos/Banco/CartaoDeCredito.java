
public class CartaoDeCredito {
	int numero;
	double TotalFatura;
		
	public double consultarFatura() {
		return this.TotalFatura;
	}
	
	public String retornarDados() {
		
		String aux = "";
		
		aux += "Numero do Cart�o: " + numero;
		aux += "Total da Fatura: " + TotalFatura;
		
		return aux;
	}
	
}
