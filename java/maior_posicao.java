import java.util.Locale;
import java.util.Scanner;

public class maior_posicao {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, posmaior;
	    double maior;

	    System.out.print("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    double[] vetor = new double[n];

	    for (int i=0; i<n; i++) {
	    	System.out.print("Digite um numero: ");
	        vetor[i] = sc.nextDouble();
	    }

	    maior = vetor[0];
	    posmaior = 0;

	    for (int i=1; i<n; i++) {
	        if (vetor[i] > maior) {
	            maior = vetor[i];
	            posmaior = i;
	        }
	    }
		
	    System.out.printf("MAIOR VALOR = %.1f\n", maior);
	    System.out.printf("POSICAO DO MAIOR VALOR = %d\n", posmaior);

		sc.close();
	}
}
