using System;
using System.Collections.Generic;
using System.IO;
using System.Threading;

namespace ConsoleApp4
{
    public delegate void RectangleHandler(Rectangle rec);
    public class RecManager
    {
        public event RectangleHandler Loaded;
        private List<Rectangle> recs = new();

        public void Add(Rectangle r) { recs.Add(r); }
        public List<Rectangle> Rectangles { get => new(recs); }
        public void Load(string filename)
        {
            try
            {
                string[] lines = File.ReadAllLines(filename);
                if (lines == null || lines.Length == 0) return;
                foreach (var line in lines)
                {
                    Rectangle rec = new() { Data = line };
                    recs.Add(rec);
                    Thread.Sleep(1000); // suspend 300 miliseconds
                    if (Loaded != null) Loaded(rec);
                }
            }
            catch (Exception) { }
            //if (Loaded != null) Loaded(this, null);
        }

    }
}
