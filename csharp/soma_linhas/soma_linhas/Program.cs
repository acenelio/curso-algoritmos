using System;
using System.Globalization;

namespace soma_linhas
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int m, n;
			double somalinha;

			Console.Write("Qual a quantidade de linhas da matriz? ");
			m = int.Parse(Console.ReadLine());
			Console.Write("Qual a quantidade de colunas da matriz? ");
			n = int.Parse(Console.ReadLine());

			double[,] matriz = new double[m, n];
			double[] vetor = new double[m];

			for (int i=0; i<m; i++)
			{
				Console.WriteLine("Digite os elementos da " + (i + 1) + "a. linha");

				for (int j=0; j<n; j++)
				{
					matriz[i, j] = double.Parse(Console.ReadLine(), CI);
				}
			}

			for (int i=0; i<m; i++)
			{
				somalinha = 0;

				for (int j=0; j<n; j++){
					somalinha = somalinha + matriz[i, j];
				}
				vetor[i] = somalinha;
			}

			Console.WriteLine("VETOR GERADO:");

			for (int i=0; i<m; i++)
			{
				Console.WriteLine(vetor[i].ToString("F1", CI));
			}
		}
	}
}
