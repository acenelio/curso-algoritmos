using System;
using System.Globalization;

namespace circulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double raio, area;

            Console.Write("Digite o valor do raio do circulo: ");
            raio = double.Parse(Console.ReadLine(), CI);

            area = Math.PI * raio * raio;

            Console.WriteLine("AREA = " + area.ToString("F3", CI));
        }
    }
}
