using System;
using System.Globalization;

namespace lanchonete
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int codigo, qtd;
			double pagar;

			Console.Write("Codigo do produto comprado: ");
			codigo = int.Parse(Console.ReadLine());

			Console.Write("Quantidade comprada: ");
			qtd = int.Parse(Console.ReadLine());

			pagar = 0;
			if (codigo == 1)
			{
				pagar = qtd * 5.00;
			}
			else if (codigo == 2)
			{
				pagar = qtd * 3.50;
			}
			else if (codigo == 3)
			{
				pagar = qtd * 4.80;
			}
			else if (codigo == 4)
			{
				pagar = qtd * 8.90;
			}
			else if (codigo == 5)
			{
				pagar = qtd * 7.32;
			}

			Console.WriteLine("Valor a pagar: R$ " + pagar.ToString("F2", CI));
		}
	}
}
