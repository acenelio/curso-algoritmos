using System;

namespace pares_consecutivos
{
	class Program
	{
		static void Main(string[] args)
		{
			int x, soma;

			Console.Write("Digite um numero inteiro: ");
			x = int.Parse(Console.ReadLine());

			while (x != 0)
			{
				if (x % 2 != 0)
				{
					x++;
				}

				soma = 5 * x + 20;
				Console.WriteLine("SOMA = " + soma);

				Console.Write("Digite um numero inteiro: ");
				x = int.Parse(Console.ReadLine());
			}
		}
	}
}
