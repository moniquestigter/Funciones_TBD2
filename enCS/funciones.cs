using System;
using System.Data;

 class Funciones{
     
    public int ping(string ip){
        return 0;
    }
    public double pmt (double tasaI, int numPeriodos, double pv){ //done
        double resul = (pv*tasaI)/(1 - (Math.Pow((1 + tasaI), -numPeriodos)));
        int res = (int)(resul);
        return res;
    }

    public int bin2dec (String binary){
        int dec = Convert.ToInt32(binary, 2);
        return dec;
    }

    public string dec2bin (int valDec){ //done
        string binary = "";
        int i =0;
        while (valDec > 0){
            binary+=(valDec%2);
            i++;
            valDec = valDec/2;
        }
        return binary;
    }

    public int c2f (int tempC){ //done
        int tempF = (int)(tempC * 1.8) + 32;
        return tempF;
    }

    public int f2c (int tempF){ //done
        int tempC = (int)((tempF-32) *  0.5556);
        return tempC;
    }

    public int factorial (int num){ //done
        int i,fact=1;  
        for(i=1;i<=num;i++){    
            fact=fact*i;    
        }    
        return fact;
    }

    public int hex2dec (String hexa){
        int dec = int.Parse(hexa, System.Globalization.NumberStyles.HexNumber);
        return dec;
    }

    public String dec2hex (int num){
        string hex = num.ToString("X");
        return hex;
    }

    public int compareString (String str1, String str2){ //done
        if(str1.Length < str2.Length){
            return -1;
        } else if(str1.Length == str2.Length){
            if(str1 == str2){
                return 0;
            } else {
                return -1;
            }
        } else if(str1.Length > str2.Length){
            return 1;
        }
        return -2;
    }

    public String trim (String cadena, String remover){ //done
        if(cadena[0] == remover[0]){
            string n = cadena.Replace(cadena[0].ToString(), "");
            return n;
        } else if(cadena[cadena.Length-1] == remover[0]){
            string n = cadena.Replace(cadena[cadena.Length-1].ToString(), "");
            return n;
        }
        return ""; 
    }

    public String repeat (String str, int cant){ //done
        String res = "";
        for(int a = 0; a<cant; a++){
            res+=str;
        }
        return res;
    }
} 

namespace Proj3 {
   public class Funcs {

      static void Main(string[] args) {

         Funciones funciones = new Funciones();
         Console.WriteLine(funciones.bin2dec("1001"));
      }
   }
}


