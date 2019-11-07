import java.util.Locale;
import java.util.Scanner;

public class cada_linha {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, maior;

	    System.out.print("Qual a ordem da matriz? ");
	    n = sc.nextInt();
	
	    int[][] matriz = new int[n][n];
	    int[] maiorlinha = new int[n];
	
	    for (int i=0; i<n; i++) {
	        for (int j=0; j<n; j++) {
				System.out.printf("Elemento [%d,%d]: ", i, j);
	            matriz[i][j] = sc.nextInt();
	        }
	    }
	
	    for (int i=0; i<n; i++) {
	        maior = matriz[i][0];
	        for (int j=1; j<n; j++) {
	            if (maior < matriz[i][j]) {
	                maior = matriz[i][j];
	            }
	        }
	        maiorlinha[i] = maior;
	    }
	
	    System.out.println("MAIOR ELEMENTO DE CADA LINHA:");
	
	    for (int i=0; i<n; i++) {
			System.out.printf("%d\n", maiorlinha[i]);
	    }

		sc.close();
	}
}
