using System;

namespace multiplos
{
	class Program
	{
		static void Main(string[] args)
		{
			int num1, num2;

			Console.WriteLine("Digite dois numeros inteiros:");
			num1 = int.Parse(Console.ReadLine());
			num2 = int.Parse(Console.ReadLine());

			if (num1 % num2 == 0 || num2 % num1 == 0)
			{
				Console.WriteLine("Sao multiplos\n");
			}
			else
			{
				Console.WriteLine("Nao sao multiplos\n");
			}
		}
	}
}
