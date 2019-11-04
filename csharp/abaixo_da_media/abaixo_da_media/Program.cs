using System;
using System.Globalization;

namespace abaixo_da_media
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n;
			double soma = 0, media;

			Console.Write("Quantos elementos vai ter o vetor? ");
			n = int.Parse(Console.ReadLine());

			double[] vetor = new double[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				vetor[i] = double.Parse(Console.ReadLine(), CI);
			}

			for (int i = 0; i < n; i++)
			{
				soma = soma + vetor[i];
			}

			media = soma / n;

			Console.WriteLine("\nMEDIA DO VETOR = " + media.ToString("F3", CI));
			Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA:");

			for (int i = 0; i < n; i++)
			{
				if (vetor[i] < media)
				{
					Console.WriteLine(vetor[i].ToString("F1", CI));
				}
			}
		}
	}
}
