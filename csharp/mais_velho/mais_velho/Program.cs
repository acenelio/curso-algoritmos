using System;

namespace mais_velho
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, maioridade, posicaomaior;

			Console.Write("Quantas pessoas voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			string[] nomes = new string[n];
			int[] idades = new int[n];

			for (int i = 0; i < n; i++)
			{
				Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
				Console.Write("Nome: ");
				nomes[i] = Console.ReadLine();
				Console.Write("Idade: ");
				idades[i] = int.Parse(Console.ReadLine());
			}

			maioridade = idades[0];
			posicaomaior = 0;

			for (int i = 1; i < n; i++)
			{
				if (idades[i] > maioridade)
				{
					maioridade = idades[i];
					posicaomaior = i;
				}
			}

			Console.WriteLine("PESSOA MAIS VELHA: " + nomes[posicaomaior]);
		}
	}
}
