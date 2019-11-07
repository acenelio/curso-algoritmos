import java.util.Locale;
import java.util.Scanner;

public class negativos_matriz {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m, n;

	    System.out.print("Qual a quantidade de linhas da matriz? ");
	    m = sc.nextInt();
	    System.out.print("Qual a quantidade de colunas da matriz? ");
	    n = sc.nextInt();

	    int[][] matriz = new int[m][n];

	    for (int i=0; i<m; i++) {
	        for (int j=0; j<n; j++) {
	        	System.out.printf("Elemento [%d,%d]: ", i, j);
	            matriz[i][j] = sc.nextInt();
	        }
	    }
		
	    System.out.println("VALORES NEGATIVOS:");

	    for (int i=0; i<m; i++) {
	        for (int j=0; j<n; j++) {
	            if (matriz[i][j] < 0) {
	            	System.out.printf("%d\n", matriz[i][j]);
	            }
	        }
	    }

		sc.close();
	}
}
