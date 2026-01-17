using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab3
{
    internal class bai2
    {
        static void Main(string[] args)
        {
            Console.InputEncoding = Encoding.UTF8;
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.Write("Mời nhập số phần tử mảng: ");
            n = Convert.ToInt32(Console.ReadLine());
            string[] hoten = new string[n];
            double[] diem = new double[n];
            for (int i = 0; i < n; i++)
            {
                Console.Write($"Nhập vào tên học sinh thứ {i + 1}: ");
                hoten[i] = Console.ReadLine();
                Console.Write($"Điểm của học sinh thứ {i + 1}: ");
                diem[i] = Convert.ToDouble(Console.ReadLine());
            }
            Console.WriteLine("\nThông tin các học sinh trong lớp là ");
            Console.WriteLine($"{"Họ tên",-30} {"Điểm",5} {"xếp loại",0}");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine($"{hoten[i],-30} {diem[i],5} {gethocluc(diem[i]),0}");
            }
        }
        static string gethocluc(double diem)
        {
            if (diem < 5)
            {
                return "yếu";
            }
            else if (diem < 6.5)
            {
                return "trung bình";
            }
            else if (diem < 7.5)
            {
                return "khá";
            }
            else if (diem < 9)
            {
                return "giỏi";
            }
            else
            {
                return "xuất sắc";
            }
        }
    }
}