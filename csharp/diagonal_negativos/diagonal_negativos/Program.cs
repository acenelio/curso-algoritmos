using System;

namespace diagonal_negativos
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, qtdnegativos;

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

			Console.WriteLine("DIAGONAL PRINCIPAL:");

			for (int i = 0; i < n; i++)
			{
				Console.Write(matriz[i, i] + " ");
			}

			qtdnegativos = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (matriz[i, j] < 0)
					{
						qtdnegativos++;
					}
				}
			}

			Console.WriteLine("\nQUANTIDADE DE NEGATIVOS = " + qtdnegativos);
		}
	}
}
