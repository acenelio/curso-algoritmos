import java.util.Locale;
import java.util.Scanner;

public class fatorial {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, fatorial;

	    System.out.print("Digite o valor de N: ");
	    n = sc.nextInt();

	    fatorial = 1;
	    for (int i=n; i>0; i--) {
	        fatorial = fatorial * i;
	    }

	    System.out.printf("FATORIAL = %d\n", fatorial);

		sc.close();
	}
}
