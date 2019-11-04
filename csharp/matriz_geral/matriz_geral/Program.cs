using System;
using System.Globalization;

namespace matriz_geral
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, indlinha, indcoluna;
			double somapositivos;

			Console.Write("Qual a ordem da matriz? ");
			n = int.Parse(Console.ReadLine());

			double[,] matriz = new double[n, n];

			for (int i=0; i<n; i++)
			{
				for (int j=0; j<n; j++)
				{
					Console.Write("Elemento [" + i + "," + j + "]: ");
					matriz[i, j] = double.Parse(Console.ReadLine(), CI);
				}
			}

			somapositivos = 0;
			for (int i=0; i<n; i++)
			{
				for (int j=0; j<n; j++)
				{
					if (matriz[i, j] > 0)
					{
						somapositivos = somapositivos + matriz[i, j];
					}
				}
			}

			Console.WriteLine("\nSOMA DOS POSITIVOS: " + somapositivos.ToString("F1", CI) + "\n");

			Console.Write("Escolha uma linha: ");
			indlinha = int.Parse(Console.ReadLine());

			Console.Write("LINHA ESCOLHIDA: ");

			for (int i=0; i<n; i++)
			{
				Console.Write(matriz[indlinha, i].ToString("F1", CI) + " ");
			}

			Console.Write("\n\nEscolha uma coluna: ");
			indcoluna = int.Parse(Console.ReadLine());

			Console.Write("COLUNA ESCOLHIDA: ");

			for (int i=0; i<n; i++)
			{
				Console.Write(matriz[i, indcoluna].ToString("F1", CI) + " ");
			}

			Console.Write("\n\nDIAGONAL PRINCIPAL: ");

			for (int i=0; i<n; i++)
			{
				Console.Write(matriz[i, i].ToString("F1", CI) + " ");
			}

			for (int i=0; i<n; i++)
			{
				for (int j=0; j<n; j++)
				{
					if (matriz[i, j] < 0)
					{
						matriz[i, j] = Math.Pow(matriz[i, j], 2);
					}
				}
			}

			Console.WriteLine("\n\nMATRIZ ALTERADA:");

			for (int i=0; i<n; i++)
			{
				for (int j=0; j<n; j++)
				{
					Console.Write(matriz[i, j].ToString("F1", CI) + " ");
				}
				Console.WriteLine();
			}
		}
	}
}
