using System;
using System.Globalization;

namespace terreno
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double largura, comprimento, valor, area, preco;

			Console.Write("Digite a largura do terreno: ");
			largura = double.Parse(Console.ReadLine(), CI);

			Console.Write("Digite o comprimento do terreno: ");
			comprimento = double.Parse(Console.ReadLine(), CI);

			Console.Write("Digite o valor do metro quadrado: ");
			valor = double.Parse(Console.ReadLine(), CI);

			area = largura * comprimento;

			Console.WriteLine("Area do terreno = " + area.ToString("F2", CI));

			preco = area * valor;

			Console.WriteLine("Preco do terreno = " + preco.ToString("F2", CI));
		}
	}
}
