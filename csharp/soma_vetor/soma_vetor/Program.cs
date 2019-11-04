using System;
using System.Globalization;

namespace soma_vetor
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n;
			double soma, media;

			Console.Write("Quantos numeros voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			double[] vetor = new double[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				vetor[i] = double.Parse(Console.ReadLine(), CI);
			}

			soma = 0;
			for (int i = 0; i < n; i++)
			{
				soma = soma + vetor[i];
			}

			media = soma / n;

			Console.Write("\nVALORES = ");

			for (int i = 0; i < n; i++)
			{
				Console.Write(vetor[i].ToString("F1", CI) + "  ");
			}

			Console.WriteLine("\nSOMA = " + soma.ToString("F2", CI));
			Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
		}
	}
}
