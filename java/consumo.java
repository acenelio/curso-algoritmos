import java.util.Locale;
import java.util.Scanner;

public class consumo {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int distancia;
	    double gasto, consumo;

	    System.out.print("Distancia percorrida: ");
	    distancia = sc.nextInt();

	    System.out.print("Combustivel gasto: ");
	    gasto = sc.nextDouble();

	    consumo = distancia/gasto;

		System.out.printf("Consumo medio = %.3f\n", consumo);

		sc.close();
	}
}
