using System;
using System.Globalization;

namespace media_ponderada
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int n;
			double valor, valor1, valor2, media;

			Console.Write("Quantos casos voce vai digitar? ");
			n = int.Parse(Console.ReadLine());

			for (int i = 0; i < n; i++)
			{
				Console.WriteLine("Digite tres numeros:");
				valor = double.Parse(Console.ReadLine(), CI);
				valor1 = double.Parse(Console.ReadLine(), CI);
				valor2 = double.Parse(Console.ReadLine(), CI);

				media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0;

				Console.WriteLine("MEDIA = " + media.ToString("F1", CI));
			}
		}
	}
}
