import java.util.Locale;
import java.util.Scanner;

public class soma_linhas {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m, n;
	    double somalinha;

	    System.out.print("Qual a quantidade de linhas da matriz? ");
	    m = sc.nextInt();
	    System.out.print("Qual a quantidade de colunas da matriz? ");
	    n = sc.nextInt();

	    double[][] matriz = new double[m][n];
	    double[] vetor = new double[m];

	    for (int i=0; i<m; i++) {
	    	System.out.printf("Digite os elementos da %d a. linha\n", i + 1);

	        for (int j=0; j<n; j++) {
	            matriz[i][j] = sc.nextDouble();
	        }
	    }

	    for (int i=0; i<m; i++) {
	        somalinha = 0;

	        for (int j=0; j<n; j++) {
	            somalinha = somalinha + matriz[i][j];
	        }
	        vetor[i] = somalinha;
	    }

	    System.out.println("VETOR GERADO:");

	    for (int i=0; i<m; i++) {
	    	System.out.printf("%.1f\n", vetor[i]);
	    }

		sc.close();
	}
}
