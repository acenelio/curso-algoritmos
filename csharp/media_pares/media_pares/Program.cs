using System;
using System.Globalization;

namespace media_pares
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, somapares = 0, npares = 0;
			double mediapares;

			Console.Write("Quantos elementos vai ter o vetor? ");
			n = int.Parse(Console.ReadLine());

			int[] vetor = new int[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				vetor[i] = int.Parse(Console.ReadLine());
			}

			for (int i = 0; i < n; i++)
			{
				if (vetor[i] % 2 == 0)
				{
					somapares = somapares + vetor[i];
					npares++;
				}
			}

			if (npares == 0)
			{
				Console.WriteLine("NENHUM NUMERO PAR");
			}
			else
			{
				mediapares = (double)somapares / npares;

				Console.WriteLine("MEDIA DOS PARES = " + mediapares.ToString("F1", CI));
			}
		}
	}
}
