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
            #region Problem: People
            bool isStandardInput =false;
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
            #endregion

            #region Sorted people in as ascending of ages
            var sortedPeople = people.OrderBy(e => e.GetAge()).ToList();
            Console.WriteLine("\nHere are all people in ascending of ages");
            ViewPeople(sortedPeople);
            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
            #endregion

            #region Homework > Solution
            #region Filtering for people with ages > 25
            var over25People = people.Where(p => p.GetAge() > 25).ToList();
            Console.WriteLine("\nHere are all people being aged > 25");
            ViewPeople(over25People);
            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
            #endregion

            #region Getting a person with name "Keo Neary", then changing to "Tep Vattana"
            string curName = "Keo Neary";
            var target = people.FirstOrDefault(p => p.GetName().Equals(curName));
            if (target==null)
            {
                Console.WriteLine($"Not found the person with name \"{curName}\"");
            }
            else
            {
                string newName = "Tep Vattana";
                target.SetName(newName);  //SetName() is an instance method existing in the class Person
            }
            Console.WriteLine("\nHere are all people after name effected");
            ViewPeople(people);
            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
            #endregion

            #region Updating all genders: male > M, female > F.
            people.ForEach(p =>
                {
                    string curGender = p.GetGender().ToLower();
                    string newGender = curGender switch { 
                                            "male" => "M", 
                                            "female" => "F",
                                            _ => curGender 
                                            };
                    p.SetGender(newGender);
                });

            Console.WriteLine("\nHere are all people after genders updated");
            ViewPeople(people);
            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
            #endregion
            #endregion
        }
        static void ViewPeople(List<Person> people)
        {
            Console.WriteLine($"{"Name", -30} {"Gender", -7} {"Age", 3}");
            Console.WriteLine("===========================================");
            foreach (var p in people)
            {
                Console.WriteLine($"{p.GetName(),-30} {p.GetGender(),-7} {p.GetAge(),3}");
            }
        }
    }
}
