using System;
using System.Globalization;

namespace media_idades
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			int idade, npessoas;
			double soma, media;

			Console.WriteLine("Digite as idades:");
			idade = int.Parse(Console.ReadLine());

			if (idade < 0)
			{
				Console.WriteLine("IMPOSSIVEL CALCULAR");
			}
			else
			{
				soma = 0;
				npessoas = 0;
				while (idade >= 0)
				{
					soma = soma + idade;
					npessoas++;
					idade = int.Parse(Console.ReadLine());
				}

				media = soma / npessoas;

				Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
			}
		}
	}
}
