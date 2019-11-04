using System;

namespace menor_de_tres
{
	class Program
	{
		static void Main(string[] args)
		{
			int a, b, c, menor;

			Console.Write("Primeiro valor: ");
			a = int.Parse(Console.ReadLine());

			Console.Write("Segundo valor: ");
			b = int.Parse(Console.ReadLine());

			Console.Write("Terceiro valor: ");
			c = int.Parse(Console.ReadLine());


			if (a < b && a < c)
			{
				menor = a;
			}
			else if (b < c)
			{
				menor = b;
			}
			else
			{
				menor = c;
			}

			Console.WriteLine("MENOR = " + menor);
		}
	}
}
