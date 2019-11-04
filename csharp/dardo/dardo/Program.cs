using System;
using System.Globalization;

namespace dardo
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double distancia1, distancia2, distancia3, maior;

			Console.WriteLine("Digite as tres distancias:");
			distancia1 = double.Parse(Console.ReadLine(), CI);
			distancia2 = double.Parse(Console.ReadLine(), CI);
			distancia3 = double.Parse(Console.ReadLine(), CI);

			if (distancia1 > distancia2 && distancia1 > distancia3)
			{
				maior = distancia1;
			}
			else if (distancia2 > distancia1 && distancia2 > distancia3)
			{
				maior = distancia2;
			}
			else
			{
				maior = distancia3;
			}

			Console.WriteLine("MAIOR DISTANCIA = " + maior.ToString("F2", CI));
		}
	}
}
