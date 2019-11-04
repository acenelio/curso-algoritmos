using System;

namespace tempo_de_jogo
{
	class Program
	{
		static void Main(string[] args)
		{
			int hinicial, hfinal, resp;

			Console.Write("Hora inicial: ");
			hinicial = int.Parse(Console.ReadLine());

			Console.Write("Hora final: ");
			hfinal = int.Parse(Console.ReadLine());

			if (hinicial < hfinal)
			{
				resp = hfinal - hinicial;
			}
			else
			{
				resp = 24 - (hinicial - hfinal);
			}

			Console.WriteLine("O JOGO DUROU " + resp + " HORA(S)");
		}
	}
}
