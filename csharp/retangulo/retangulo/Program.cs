using System;
using System.Globalization;

namespace retangulo
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double basee, altura, area, perimetro, diagonal;

			Console.Write("Base do retangulo: ");
			basee = double.Parse(Console.ReadLine(), CI);

			Console.Write("Altura do retangulo: ");
			altura = double.Parse(Console.ReadLine(), CI);

			area = basee * altura;

			Console.WriteLine("AREA = " + area.ToString("F4", CI));

			perimetro = 2 * (basee + altura);

			Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));

			diagonal = Math.Sqrt(basee * basee + altura * altura);

			Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
		}
	}
}
