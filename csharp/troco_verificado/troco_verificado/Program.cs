using System;
using System.Globalization;

namespace troco_verificado
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double preco, dinheiro, troco, faltam;
			int qtd;

			Console.Write("Preco unitario do produto: ");
			preco = double.Parse(Console.ReadLine(), CI);

			Console.Write("Quantidade comprada: ");
			qtd = int.Parse(Console.ReadLine());

			Console.Write("Dinheiro recebido: ");
			dinheiro = double.Parse(Console.ReadLine(), CI);

			if (preco * qtd > dinheiro)
			{
				faltam = preco * qtd - dinheiro;
				Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM " + faltam.ToString("F2", CI));
			}
			else
			{
				troco = dinheiro - preco * qtd;
				Console.WriteLine("TROCO = " + troco.ToString("F2", CI));
			}
		}
	}
}
