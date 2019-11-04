using System;
using System.Globalization;

namespace temperatura
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			char escala;
			double celsius, fahrenheit;

			Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
			escala = char.Parse(Console.ReadLine());

			if (escala == 'F')
			{
				Console.Write("Digite a temperatura em Fahrenheit: ");
				fahrenheit = double.Parse(Console.ReadLine(), CI);

				celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
				Console.WriteLine("Temperatura equivalente em Celsius: " + celsius.ToString("F2", CI));
			}
			else
			{
				Console.Write("Digite a temperatura em Celsius: ");
				celsius = double.Parse(Console.ReadLine(), CI);

				fahrenheit = celsius * 9.0 / 5.0 + 32.0;
				Console.WriteLine("Temperatura equivalente em Fahrenheit: " + fahrenheit.ToString("F2", CI));
			}
		}
	}
}
