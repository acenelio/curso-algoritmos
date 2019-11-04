using System;
using System.Globalization;

namespace aprovados
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n;
			double media;

			Console.Write("Quantos alunos serao digitados? ");
			n = int.Parse(Console.ReadLine());

			string[] nomes = new string[n];
			double[] notas1 = new double[n];
			double[] notas2 = new double[n];

			for (int i = 0; i < n; i++)
			{
				Console.WriteLine("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno:");
				nomes[i] = Console.ReadLine();
				notas1[i] = double.Parse(Console.ReadLine(), CI);
				notas2[i] = double.Parse(Console.ReadLine(), CI);
			}

			Console.WriteLine("Alunos aprovados:");

			for (int i = 0; i < n; i++)
			{
				media = (notas1[i] + notas2[i]) / 2;

				if (media >= 6.0)
				{
					Console.WriteLine(nomes[i]);
				}
			}
		}
	}
}
