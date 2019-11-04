using System;

namespace acima_diagonal
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, somaAcima;

			Console.Write("Qual a ordem da matriz? ");
			n = int.Parse(Console.ReadLine());

			int[,] matriz = new int[n, n];

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Console.Write("Elemento [" + i + "," + j + "]: ");
					matriz[i, j] = int.Parse(Console.ReadLine());
				}
			}

			somaAcima = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i < j)
					{
						somaAcima = somaAcima + matriz[i, j];
					}
				}
			}

			Console.WriteLine("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + somaAcima);
		}
	}
}
