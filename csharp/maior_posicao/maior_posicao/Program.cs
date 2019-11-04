using System;
using System.Globalization;

namespace maior_posicao
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, posmaior;
			double maior;

			Console.Write("Quantos numeros voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			double[] vetor = new double[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				vetor[i] = double.Parse(Console.ReadLine(), CI);
			}

			maior = vetor[0];
			posmaior = 0;

			for (int i = 1; i < n; i++)
			{
				if (vetor[i] > maior)
				{
					maior = vetor[i];
					posmaior = i;
				}
			}

			Console.WriteLine("\nMAIOR VALOR = " + maior.ToString("F1", CI));
			Console.WriteLine("POSICAO DO MAIOR VALOR = " + posmaior);
		}
	}
}
