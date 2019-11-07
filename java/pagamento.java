import java.util.Locale;
import java.util.Scanner;

public class pagamento {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome;
	    double valor, pagamento;
	    int horas;

	    System.out.print("Nome: ");
	    nome = sc.nextLine();

	    System.out.print("Valor por hora: ");
		valor = sc.nextDouble();

		System.out.print("Horas trabalhadas: ");
	    horas = sc.nextInt();
	    
	    pagamento = valor * horas;

	    System.out.printf("O pagamento para %s deve ser %.2f\n", nome, pagamento);

		sc.close();
	}
}
