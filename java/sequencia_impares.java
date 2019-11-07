import java.util.Locale;
import java.util.Scanner;

public class sequencia_impares {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x;

	    System.out.print("Digite o valor de X: ");
	    x = sc.nextInt();

	    for (int i=1; i<=x; i++) {
	        if (i % 2 != 0) {
	        	System.out.printf("%d\n", i);
	        }
	    }

		sc.close();
	}
}
