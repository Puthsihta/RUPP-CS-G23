using System;

namespace Person_App
{
    public class Person
    {
        //static methods
        public static void CheckData(string name, string gender, byte age)
        {
            string msg = null;
            if (string.IsNullOrEmpty(name)) msg += "Empty Name";
            if (string.IsNullOrEmpty(gender)) msg += (msg != null ? "; " : "") + "Empty Gender";
            if (age > 125) msg += (msg != null ? "; " : "") + $"Invalid age ({age})";
            if (msg != null) throw new Exception(msg);
        }
        public static (string, string, byte) Parse(string data, string delimiter)
        {
            try
            {
                string[] arr = data.Split(delimiter);
                string name = arr[0].Trim();
                string gender = arr[1].Trim();
                byte age = byte.Parse(arr[2]);
                return (name, gender, age);
            }
            catch (Exception)
            {
                throw new Exception($"Given data \"{data}\" are invalid.");
            }
        }

        //instance fields
        protected string name;
        protected string gender;
        protected byte age;

        //instance methods
        public string GetName() => name;
        public string GetGender() => gender;  
        public byte GetAge() => age;
        public string ChangName() => name;
        public byte FilteringAge() => age;
        public string UpdateGender() => gender;

        public void SetData(string name, string gender, byte age) 
        {
            Person.CheckData(name, gender, age);
            this.name = name;
            this.gender = gender;
            this.age = age; 
        }
        public void SetData(string data, string delimiter)
        {
            (string, string, byte) value = Person.Parse(data, delimiter);
            string name = value.Item1;
            string gender = value.Item2;
            byte age = value.Item3;
            this.SetData(name, gender,age);
        }
        public string GetInfo() => $"Name:{name}, Gender:{gender}, Age:{age}";
    }
}
