using System;
using System.Globalization;

namespace dados_pessoas
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, qtdhomens, qtdmulheres;
			double menoraltura, maioraltura, alturafemMedia, alturafemtotal;

			Console.Write("Quantas pessoas serao digitadas? ");
			n = int.Parse(Console.ReadLine());

			double[] alturas = new double[n];
			char[] generos = new char[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Altura da " + (i + 1) + "a pessoa: ");
				alturas[i] = double.Parse(Console.ReadLine(), CI);
				Console.Write("Genero da " + (i + 1) + "a pessoa: ");
				generos[i] = char.Parse(Console.ReadLine());
			}

			menoraltura = alturas[0];
			maioraltura = alturas[0];

			for (int i = 1; i < n; i++)
			{
				if (alturas[i] > maioraltura)
				{
					maioraltura = alturas[i];
				}
				if (alturas[i] < menoraltura)
				{
					menoraltura = alturas[i];
				}
			}

			qtdhomens = 0;
			qtdmulheres = 0;
			alturafemtotal = 0;
			for (int i = 0; i < n; i++)
			{
				if (generos[i] == 'M')
				{
					qtdhomens++;
				}
				else
				{
					qtdmulheres++;
					alturafemtotal = alturafemtotal + alturas[i];
				}
			}

			alturafemMedia = alturafemtotal / qtdmulheres;

			Console.WriteLine("Menor altura = " + menoraltura.ToString("F2", CI));
			Console.WriteLine("Maior altura = " + maioraltura.ToString("F2", CI));
			Console.WriteLine("Media das alturas da mulheres = " + alturafemMedia.ToString("F2", CI));
			Console.WriteLine("Numero de homens = " + qtdhomens);
		}
	}
}
