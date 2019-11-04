using System;

namespace soma_matrizes
{
	class Program
	{
		static void Main(string[] args)
		{
			int m, n;

			Console.Write("Quantas linhas vai ter cada matriz? ");
			m = int.Parse(Console.ReadLine());
			Console.Write("Quantas colunas vai ter cada matriz? ");
			n = int.Parse(Console.ReadLine());

			int[,] a = new int[m, n];
			int[,] b = new int[m, n];
			int[,] c = new int[m, n];

			Console.WriteLine("Digite os valores da matriz A:");

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Console.Write("Elemento [" + i + "," + j + "]: ");
					a[i, j] = int.Parse(Console.ReadLine());
				}
			}

			Console.WriteLine("Digite os valores da matriz B:");

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Console.Write("Elemento [" + i + "," + j + "]: ");
					b[i, j] = int.Parse(Console.ReadLine());
				}
			}

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					c[i, j] = a[i, j] + b[i, j];
				}
			}

			Console.WriteLine("MATRIZ SOMA:");

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					Console.Write(c[i, j] + " ");
				}
				Console.WriteLine();
			}
		}
	}
}
