using System;

namespace dentro_fora
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, x, fora, dentro;

			Console.Write("Quantos numeros voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			fora = 0;
			dentro = 0;

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				x = int.Parse(Console.ReadLine());

				if (x < 10 || x > 20)
				{
					fora++;
				}
				else
				{
					dentro++;
				}
			}

			Console.WriteLine(dentro + " DENTRO");
			Console.WriteLine(fora + " FORA");
		}
	}
}
