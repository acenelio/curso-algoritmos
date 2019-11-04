using System;

namespace cada_linha
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, maior;

			Console.Write("Qual a ordem da matriz? ");
			n = int.Parse(Console.ReadLine());

			int[,] matriz = new int[n, n];
			int[] maiorlinha = new int[n];

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Console.Write("Elemento [" + i + "," + j + "]: ");
					matriz[i, j] = int.Parse(Console.ReadLine());
				}
			}

			for (int i = 0; i < n; i++)
			{
				maior = matriz[i, 0];
				for (int j = 1; j < n; j++)
				{
					if (maior < matriz[i, j])
					{
						maior = matriz[i, j];
					}
				}
				maiorlinha[i] = maior;
			}

			Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");

			for (int i = 0; i < n; i++)
			{
				Console.WriteLine(maiorlinha[i]);
			}
		}
	}
}
