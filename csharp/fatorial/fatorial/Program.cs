using System;

namespace fatorial
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, fatorial;

			Console.Write("Digite o valor de N: ");
			n = int.Parse(Console.ReadLine());

			fatorial = 1;
			for (int i = n; i > 0; i--)
			{
				fatorial = fatorial * i;
			}

			Console.WriteLine("FATORIAL = " + fatorial);
		}
	}
}
