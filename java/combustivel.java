import java.util.Locale;
import java.util.Scanner;

public class combustivel {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo, alcool, gasolina, diesel;

		System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
	    codigo = sc.nextInt();

		alcool = 0;
		gasolina = 0;
		diesel = 0;

	    while (codigo != 4) {
	        if (codigo == 1) {
	            alcool++;
	        }
	        else if (codigo == 2) {
	            gasolina++;
	        }
	        else if (codigo == 3) {
	            diesel++;
	        }
	        System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
	        codigo = sc.nextInt();
	    }

	    System.out.println("MUITO OBRIGADO");
	    System.out.printf("Alcool: %d\n", alcool);
	    System.out.printf("Gasolina: %d\n", gasolina);
	    System.out.printf("Diesel: %d\n", diesel);

		sc.close();
	}
}
