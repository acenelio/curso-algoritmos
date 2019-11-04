using System;
using System.Globalization;

namespace consumo
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int distancia;
			double gasto, consumo;

			Console.Write("Distancia percorrida: ");
			distancia = int.Parse(Console.ReadLine());

			Console.Write("Combustivel gasto: ");
			gasto = double.Parse(Console.ReadLine(), CI);

			consumo = distancia / gasto;

			Console.WriteLine("Consumo medio = " + consumo.ToString("F3", CI));
		}
	}
}
