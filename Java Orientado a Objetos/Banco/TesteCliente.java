import java.util.Scanner;

public class TesteCliente {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner teclado = new Scanner(System.in);
		Cliente cliente = new Cliente();
		
		//input dos dados iniciais
		System.out.println("Digite o nome do cliente: ");
		cliente.nome = teclado.nextLine();
		System.out.println("Digite o CPF do cliente: ");
		cliente.cpf = teclado.next();
		System.out.println("Digite o numero da conta, saldo e limite do cliente: ");
		cliente.conta.numero = teclado.nextInt();
		cliente.conta.saldo = teclado.nextDouble();
		cliente.conta.limite = teclado.nextDouble();
		System.out.println("Digite o numero do cartão e o total da fatura do cliente: ");
		cliente.cartao.numero = teclado.nextInt();
		cliente.cartao.TotalFatura = teclado.nextDouble();
		
		System.out.print(cliente.retornarDados());
		
		
		
		teclado.close();
	}

}
