import java.util.Locale;
import java.util.Scanner;

public class duracao {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
	
		int duracao, horas, minutos, segundos, resto;

        System.out.print("Digite a duracao em segundos: ");
        duracao = sc.nextInt();

        horas = duracao / 3600;
        resto = duracao % 3600;

        minutos = resto / 60;
        segundos = resto % 60;

        System.out.println(horas + ":" + minutos + ":" + segundos);
		
		sc.close();
	}
}
