using System;
using System.Globalization;

namespace glicose
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double glicose;

			Console.Write("Digite a medida da glicose: ");
			glicose = double.Parse(Console.ReadLine(), CI);

			Console.Write("Classificacao: ");

			if (glicose <= 100)
			{
				Console.WriteLine("normal");
			}
			else if (glicose <= 140)
			{
				Console.WriteLine("elevado");
			}
			else
			{
				Console.WriteLine("diabetes");
			}
		}
	}
}
