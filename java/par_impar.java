import java.util.Scanner;

public class par_impar {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n, valor;

	    System.out.print("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    for (int i=0; i<n; i++) {
	        System.out.print("Digite um numero: ");
	        valor = sc.nextInt();

	        if (valor == 0) {
	            System.out.println("NULO");
	        }
	        else {
	            if (valor % 2 == 0) {
	            	System.out.print("PAR");
	            }
	            else {
	            	System.out.print("IMPAR");
	            }

	            if(valor > 0) {
	            	System.out.println(" POSITIVO");
	            }
	            else {
	            	System.out.println(" NEGATIVO");
	            }
	        }
	    }

		sc.close();
	}
}
