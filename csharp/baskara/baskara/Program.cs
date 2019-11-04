using System;
using System.Globalization;

namespace baskara
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double a, b, c, delta, x1, x2;

			Console.Write("Coeficiente a: ");
			a = double.Parse(Console.ReadLine(), CI);

			Console.Write("Coeficiente b: ");
			b = double.Parse(Console.ReadLine(), CI);

			Console.Write("Coeficiente c: ");
			c = double.Parse(Console.ReadLine(), CI);

			delta = (b * b) - (4 * a * c);

			if (delta < 0)
			{
				Console.WriteLine("Esta equacao nao possui raizes reais");
			}
			else
			{
				x1 = ((-b) + Math.Sqrt(delta)) / (2 * a);
				x2 = ((-b) - Math.Sqrt(delta)) / (2 * a);

				Console.WriteLine("X1 = " + x1.ToString("F4", CI));
				Console.WriteLine("X2 = " + x2.ToString("F4", CI));
			}
		}
	}
}
