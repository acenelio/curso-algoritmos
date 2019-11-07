import java.util.Locale;
import java.util.Scanner;

public class aumento {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double salario, novosalario, aumento;
	    int porcentagem;

	    System.out.print("Digite o salario da pessoa: ");
		salario = sc.nextDouble();

	    if (salario <= 1000.0) {
	        porcentagem = 20;
	        aumento = salario * porcentagem / 100;
	        novosalario = salario + aumento;
	    }
	    else if (salario <= 3000.0) {
	        porcentagem = 15;
	        aumento = salario * porcentagem / 100;
	        novosalario = salario + aumento;
	    }
	    else if (salario <= 8000.0) {
	        porcentagem = 10;
	        aumento = salario * porcentagem / 100;
	        novosalario = salario + aumento;
	    }
	    else {
	        porcentagem = 5;
	        aumento = salario * porcentagem / 100;
	        novosalario = salario + aumento;
	    }

		System.out.printf("Novo salario = R$ %.2f\n", novosalario);
		System.out.printf("Aumento = R$ %.2f\n", aumento);
		System.out.printf("Porcentagem = %d %%\n", porcentagem);

		sc.close();
	}
}
