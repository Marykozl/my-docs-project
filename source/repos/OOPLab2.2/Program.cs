using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPLab2._2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введiть x:");
            double x = double.Parse(Console.ReadLine());
            Console.Write("Введiть y:");
            double y = double.Parse(Console.ReadLine());
            Console.Write("Введiть z:");
            double z = double.Parse(Console.ReadLine());

            double s = Math.Pow(x * x * x + y * y * y + z * z * z, 1.0 / 3.0) * Math.Cos(z) + Math.Abs(x - y);
            Console.WriteLine($"s = {s}");
        }
    }
}
