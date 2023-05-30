using System;

namespace ConsoleApp4
{
    public class Rectangle
    {
        //private double wd;
        //public double GetWidth() { return wd; }
        //public void SetWidth(double wd) { this.wd = wd; }

        private double wd =10;
        public double Width { get { return wd; } set { wd = Math.Abs( value); } }//RW

        public double Length { get; set; } = 15; //auto property
       
        public double Area { get { return Width * Length; } }//R
        public string Info { get => $"{Width} * {Length} > {Area} ";  }//R

        public string Data //W
        {
            set
            {
                string[] arr = value.Split('/');
                double w = double.Parse(arr[0]), l = double.Parse(arr[1]);
                Width = w; Length = l;
            }
        }
    }
}
