using System;
using System.Globalization;

namespace comerciante
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n, abaixo, entre, acima;
			double vtotalcompra, vtotalvenda, lucrototal;

			Console.Write("Serao digitados dados de quantos produtos? ");
			n = int.Parse(Console.ReadLine());

			string[] nomes = new string[n];
			double[] pcompra = new double[n];
			double[] pvenda = new double[n];
			double[] porcentagemlucros = new double[n];

			for (int i=0; i<n; i++)
			{
				Console.WriteLine("Produto " + (i + 1) + ":");
				Console.Write("Nome: ");
				nomes[i] = Console.ReadLine();
				Console.Write("Preco de compra: ");
				pcompra[i] = double.Parse(Console.ReadLine(), CI);
				Console.Write("Preco de venda: ");
				pvenda[i] = double.Parse(Console.ReadLine(), CI);
		}

			for (int i=0; i<n; i++)
			{
				porcentagemlucros[i] = (pvenda[i] - pcompra[i]) / pcompra[i] * 100.0;
			}

			abaixo = 0;
			entre = 0;
			acima = 0;

			for (int i=0; i<n; i++)
			{
				if (porcentagemlucros[i] < 10.0)
				{
					abaixo++;
				}
				else if (porcentagemlucros[i] < 20.0)
				{
					entre++;
				}
				else
				{
					acima++;
				}
			}

			vtotalcompra = 0;
			vtotalvenda = 0;

			for (int i=0; i<n; i++)
			{
				vtotalcompra = vtotalcompra + pcompra[i];
				vtotalvenda = vtotalvenda + pvenda[i];
			}

			lucrototal = vtotalvenda - vtotalcompra;

			Console.WriteLine("\nRELATORIO:");
			Console.WriteLine("Lucro abaixo de 10%: " + abaixo);
			Console.WriteLine("Lucro entre 10% e 20%: " + entre);
			Console.WriteLine("Lucro acima de 20%: " + acima);
			Console.WriteLine("Valor total de compra: " + vtotalcompra.ToString("F2", CI));
			Console.WriteLine("Valor total de venda: " + vtotalvenda.ToString("F2", CI));
			Console.WriteLine("Lucro total: " + lucrototal.ToString("F2", CI));
		}
	}
}
