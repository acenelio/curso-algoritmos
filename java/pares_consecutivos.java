import java.util.Locale;
import java.util.Scanner;

public class pares_consecutivos {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, soma;

	    System.out.print("Digite um numero inteiro: ");
	    x = sc.nextInt();

	    while (x != 0) {
	        if (x % 2 != 0) {
	            x++;
	        }

	        soma = 5 * x + 20;
	        System.out.printf("SOMA = %d\n", soma);

	        System.out.print("Digite um numero inteiro: ");
			x = sc.nextInt();
	    }

		sc.close();
	}
}
