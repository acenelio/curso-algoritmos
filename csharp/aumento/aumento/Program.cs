using System;
using System.Globalization;

namespace aumento
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double salario, novosalario, aumento;
			int porcentagem;

			Console.Write("Digite o salario da pessoa: ");
			salario = double.Parse(Console.ReadLine(), CI);

			if (salario <= 1000.0)
			{
				porcentagem = 20;
				aumento = salario * porcentagem / 100;
				novosalario = salario + aumento;
			}
			else if (salario <= 3000.0)
			{
				porcentagem = 15;
				aumento = salario * porcentagem / 100;
				novosalario = salario + aumento;
			}
			else if (salario <= 8000.0)
			{
				porcentagem = 10;
				aumento = salario * porcentagem / 100;
				novosalario = salario + aumento;
			}
			else
			{
				porcentagem = 5;
				aumento = salario * porcentagem / 100;
				novosalario = salario + aumento;
			}

			Console.WriteLine("Novo salario = R$ " + novosalario.ToString("F2", CI));
			Console.WriteLine("Aumento = R$ " + aumento.ToString("F2", CI));
			Console.WriteLine("Porcentagem = " + porcentagem + " %");
		}
	}
}
