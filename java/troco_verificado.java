import java.util.Locale;
import java.util.Scanner;

public class troco_verificado {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double preco, dinheiro, troco, faltam;
	    int qtd;

		System.out.print("Preco unitario do produto: ");
	    preco = sc.nextDouble();

	    System.out.print("Quantidade comprada: ");
	    qtd = sc.nextInt();

	    System.out.print("Dinheiro recebido: ");
	    dinheiro = sc.nextDouble();

	    if (preco * qtd > dinheiro) {
	        faltam = preco * qtd - dinheiro;
	        System.out.printf("DINHEIRO INSUFICIENTE. FALTAM %.2f\n", faltam);
	    }
	    else {
	        troco = dinheiro - preco * qtd;
	        System.out.printf("TROCO = %.2f\n", troco);
	    }

		sc.close();
	}
}
