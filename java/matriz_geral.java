import java.util.Locale;
import java.util.Scanner;

public class matriz_geral {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, indlinha, indcoluna;
	    double somapositivos;

	    System.out.print("Qual a ordem da matriz? ");
	    n = sc.nextInt();

	    double[][] matriz = new double[n][n];

	    for (int i=0; i<n; i++) {
	        for (int j=0; j<n; j++) {
	        	System.out.printf("Elemento [%d,%d]: ", i, j);
	            matriz[i][j] = sc.nextDouble();
	        }
	    }

	    somapositivos = 0;
	    for (int i=0; i<n; i++) {
	        for (int j=0; j<n; j++) {
	            if (matriz[i][j] > 0) {
	                somapositivos = somapositivos + matriz[i][j];
	            }
	        }
	    }

	    System.out.printf("\nSOMA DOS POSITIVOS: %.1f\n\n", somapositivos);

	    System.out.print("Escolha uma linha: ");
		indlinha = sc.nextInt();

		System.out.print("LINHA ESCOLHIDA: ");

	    for (int i=0; i<n; i++) {
	    	System.out.printf("%.1f ", matriz[indlinha][i]);
	    }

	    System.out.printf("\n\nEscolha uma coluna: ");
		indcoluna = sc.nextInt();

		System.out.print("COLUNA ESCOLHIDA: ");

	    for (int i=0; i<n; i++) {
	    	System.out.printf("%.1f ", matriz[i][indcoluna]);
	    }

	    System.out.printf("\n\nDIAGONAL PRINCIPAL: ");

	    for (int i=0; i<n; i++) {
	    	System.out.printf("%.1f ", matriz[i][i]);
	    }

	    for (int i=0; i<n; i++) {
	        for (int j=0; j<n; j++) {
	            if (matriz[i][j] < 0) {
	                matriz[i][j] = Math.pow(matriz[i][j], 2);
	            }
	        }
	    }

		System.out.println("\n\nMATRIZ ALTERADA:");

	    for (int i=0; i<n; i++) {
	        for (int j=0; j<n; j++) {
	        	System.out.printf("%.1f ", matriz[i][j]);
	        }
			System.out.println();
	    }

		sc.close();
	}
}
