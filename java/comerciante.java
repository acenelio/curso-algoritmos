import java.util.Locale;
import java.util.Scanner;

public class comerciante {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, abaixo, entre, acima;
	    double vtotalcompra, vtotalvenda, lucrototal;

	    System.out.print("Serao digitados dados de quantos produtos? ");
	    n = sc.nextInt();

	    String[] nomes = new String[n];
	    double[] pcompra = new double[n];
	    double[] pvenda = new double[n];
	    double[] porcentagemlucros = new double[n];

	    for (int i=0; i<n; i++) {
	    	System.out.printf("Produto %d:\n", i + 1);
	    	System.out.print("Nome: ");
	    	sc.nextLine();
	        nomes[i] = sc.nextLine();
	        System.out.print("Preco de compra: ");
	        pcompra[i] = sc.nextDouble();
	        System.out.print("Preco de venda: ");
	        pvenda[i] = sc.nextDouble();
	     }

	    for (int i=0; i<n; i++) {
	        porcentagemlucros[i] = (pvenda[i] - pcompra[i]) / pcompra[i] * 100.0;
	    }

	    abaixo = 0;
	    entre = 0;
	    acima = 0;

	    for (int i=0; i<n; i++) {
	        if (porcentagemlucros[i] < 10.0) {
	            abaixo++;
	        }
	        else if (porcentagemlucros[i] < 20.0) {
	            entre++;
	        }
	        else {
	            acima++;
	        }
	    }

	    vtotalcompra = 0;
	    vtotalvenda = 0;

	    for (int i=0; i<n; i++) {
	        vtotalcompra = vtotalcompra + pcompra[i];
	        vtotalvenda = vtotalvenda + pvenda[i];
	    }

	    lucrototal = vtotalvenda - vtotalcompra;

	    System.out.println("\nRELATORIO:");
	    System.out.printf("Lucro abaixo de 10%%: %d\n", abaixo);
	    System.out.printf("Lucro entre 10%% e 20%%: %d\n", entre);
	    System.out.printf("Lucro acima de 20%%: %d\n", acima);
	    System.out.printf("Valor total de compra: %.2f\n", vtotalcompra);
	    System.out.printf("Valor total de venda: %.2f\n", vtotalvenda);
	    System.out.printf("Lucro total: %.2f\n", lucrototal);

		sc.close();
	}
}
