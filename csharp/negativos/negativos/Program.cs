using System;

namespace negativos
{
	class Program
	{
		static void Main(string[] args)
		{
			int n;

			Console.Write("Quantos numeros voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			int[] vetor = new int[n];

			for (int i = 0; i < n; i++)
			{
				Console.Write("Digite um numero: ");
				vetor[i] = int.Parse(Console.ReadLine());
			}

			Console.WriteLine("NUMEROS NEGATIVOS:");

			for (int i = 0; i < n; i++)
			{
				if (vetor[i] < 0)
				{
					Console.WriteLine(vetor[i]);
				}
			}
		}
	}
}
