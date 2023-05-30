using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            double width, length;

            Console.Write("Enter Width = ");
            width = double.Parse(Console.ReadLine());
            Console.Write("Enter Length = ");
            length = double.Parse(Console.ReadLine());

            double paremeter, area;
            paremeter = (width + length) * 2;
            area = width * length;

            Console.WriteLine("Parameter = " + paremeter);
            Console.WriteLine("Area = " + area);

            Console.ReadKey();
        }
    }
}
