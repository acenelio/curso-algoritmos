import java.util.Locale;
import java.util.Scanner;

public class tempo_de_jogo {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int hinicial, hfinal;

		System.out.print("Hora inicial: ");
	    hinicial = sc.nextInt();

	    System.out.print("Hora final: ");
	    hfinal = sc.nextInt();

	    if (hinicial < hfinal) {
	    	System.out.printf("O JOGO DUROU %d HORA(S)\n", hfinal - hinicial);
	    }
	    else {
			System.out.printf("O JOGO DUROU %d HORA(S)\n", 24 - (hinicial - hfinal));
	    }

		sc.close();
	}
}
