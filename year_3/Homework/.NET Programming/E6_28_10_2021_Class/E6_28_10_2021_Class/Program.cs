using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Person_App
{
    class Program
    {
        static void Main(string[] args)
        {
            bool isStandardInput = true;
            if (isStandardInput is false) Console.SetIn(new StreamReader("data.txt"));
            
            List<Person> people = new List<Person>();
            
            while (true)
            {
                if (isStandardInput) Console.Write("\nInput a person's data (<name>/<gender>/<age>): ");
                string data = Console.ReadLine();
                if (data == null) break;
                Person p = new Person();
                try
                {
                    p.SetData(data, "/");
                    people.Add(p);
                } catch (Exception ex)
                {
                    Console.WriteLine($"Error > {ex.Message}");
                }

                if (isStandardInput)
                {
                    Console.WriteLine();
                    Console.Write("Esc to stop, any key for another input...");
                    char key = Console.ReadKey(true).KeyChar;
                    if (key == (char)ConsoleKey.Escape) break;
                }
            }

            //var sortedPeople = people.OrderBy(e => e.GetAge());
            IOrderedEnumerable<Person> sortedPeople = people.OrderBy(e => e.GetAge());
            Console.WriteLine("\nHere are all people");
            foreach (var p in sortedPeople) 
                Console.WriteLine(p.GetInfo());
            Console.ReadKey();
            
        }
    }
}
