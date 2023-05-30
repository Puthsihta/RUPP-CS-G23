using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static int x, y;
        static RecManager mgr = new();
        static void Main(string[] args)
        {
            
            mgr.Loaded += ViewRectangle;
            (x, y) = Console.GetCursorPosition();
            Console.WriteLine("Start loading rectangles...");
            
            

            mgr.Load("data.txt");

            Console.WriteLine("\n\nAll rectangles");
            mgr.Rectangles.ForEach(e => Console.WriteLine(e.Info));
        }
        static void ViewRectangle(Rectangle rec)
        {
            Console.Clear();
            Console.WriteLine("Start loading rectangles...");
            Console.SetCursorPosition(x, y);
            Console.CursorVisible = false;
            List<Rectangle> recs = mgr.Rectangles;
            Console.Write($"Rectangles: {recs.Count}\nTotal Area:{recs.Sum(e=>e.Area):N2}\nLast:{rec.Info}");
        }
  
        
    }
}
