using System;
using System.Globalization;

namespace experiencias
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, ratos, sapos, coelhos, qtdcobaias, total;
			char tipo;
			double pratos, psapos, pcoelhos;

			Console.Write("Quantos casos de teste serao digitados? ");
			n = int.Parse(Console.ReadLine());

			ratos = 0;
			sapos = 0;
			coelhos = 0;

			for (int i = 0; i < n; i++)
			{
				Console.Write("Quantidade de cobaias: ");
				qtdcobaias = int.Parse(Console.ReadLine());
				Console.Write("Tipo de cobaia: ");
				tipo = char.Parse(Console.ReadLine());

				if (tipo == 'R')
				{
					ratos = ratos + qtdcobaias;
				}
				else if (tipo == 'S')
				{
					sapos = sapos + qtdcobaias;
				}
				else
				{
					coelhos = coelhos + qtdcobaias;
				}
			}

			total = ratos + sapos + coelhos;
			pcoelhos = ((double)coelhos / total) * 100.0;
			pratos = ((double)ratos / total) * 100.0;
			psapos = ((double)sapos / total) * 100.0;

			Console.WriteLine("\nRELATORIO FINAL:");
			Console.WriteLine("Total: "+ total + " cobaias");
			Console.WriteLine("Total de coelhos: " + coelhos);
			Console.WriteLine("Total de ratos: " + ratos);
			Console.WriteLine("Total de sapos: " + sapos);
			Console.WriteLine("Percentual de coelhos: " + pcoelhos.ToString("F2", CI));
			Console.WriteLine("Percentual de ratos: " + pratos.ToString("F2", CI));
			Console.WriteLine("Percentual de sapos: " + psapos.ToString("F2", CI));
		}
	}
}
