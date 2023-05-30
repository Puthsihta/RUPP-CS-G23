using System;

namespace Triangle_App
{
    class Program
    {
        static void Main(string[] args)
        {
        start:
            Console.Clear();
            Console.WriteLine("\nTriangle\n=======================");
            Console.Write("Side A: ");
            double a = double.Parse(Console.ReadLine());
            Console.Write("Side B: ");
            double b = double.Parse(Console.ReadLine());
            Console.Write("Side C: ");
            double c = double.Parse(Console.ReadLine());

            Console.WriteLine();
            if ((a + b < c) || (b + c < a) || (c + a < b))
            {
                Console.WriteLine($"Given sides ({a}, {b}, {c}) are invalild.");
            }
            else
            {
                double p = (a + b + c) / 2.0;
                double s = Math.Sqrt(p * (p - a) * (p - b) * (p - c));
                Console.WriteLine($"Sides ({a}, {b}, {c}) > Area={s:n3}");
            }

            Console.Write("Esc to stop, any key to continue...");
            char key = Console.ReadKey().KeyChar;
            Console.WriteLine();
            if (key != (char)ConsoleKey.Escape) goto start;
        }
    }
}
