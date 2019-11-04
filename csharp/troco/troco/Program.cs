using System;
using System.Globalization;

namespace troco
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double preco, dinheiro, troco;
			int qtd;

			Console.Write("Preco unitario do produto: ");
			preco = double.Parse(Console.ReadLine(), CI);
			
			Console.Write("Quantidade comprada: ");
			qtd = int.Parse(Console.ReadLine());

			Console.Write("Dinheiro recebido: ");
			dinheiro = double.Parse(Console.ReadLine(), CI);

			troco = dinheiro - (preco * qtd);

			Console.WriteLine("TROCO = " + troco.ToString("F2", CI));
		}
	}
}
