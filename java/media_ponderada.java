import java.util.Locale;
import java.util.Scanner;

public class media_ponderada {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
	    double valor, valor1, valor2, media;

	    System.out.print("Quantos casos voce vai digitar? ");
	    n = sc.nextInt();

	    for (int i=0; i<n; i++) {
	    	System.out.println("Digite tres numeros:");
	        valor = sc.nextDouble();
	        valor1 = sc.nextDouble();
	        valor2 = sc.nextDouble();

	        media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0;
			
	        System.out.printf("MEDIA = %.1f\n", media);
	    }

		sc.close();
	}
}
