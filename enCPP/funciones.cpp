#include <stdio.h>
#include <string>
#include <sstream>
#include <tgmath.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

struct Funciones{
public:
    Funciones(){};
    int ping(string ip){
        return 0;
    }
    double pmt (double tasaI, int numPeriodos, double pv){ //done
        double resul = (pv*tasaI)/(1 - (pow((1 + tasaI), -numPeriodos)));
        int res = (int)(resul);
        return res;
    }

    int bin2dec (string binary){
        int n = stoi(binary);
        int dec = 0, i = 0, remainder;
        while (n!=0){
            remainder = n%10;
            n /= 10;
            dec += remainder*pow(2,i);
            ++i;
        }
        return dec;
    }

    string dec2bin (int valDec){ //done
        int binary = 0;
        int remainder, i = 1;

        while (valDec!=0){
            remainder = valDec%2;
            valDec /= 2;
            binary += remainder*i;
            i *= 10;
        }
        return to_string(binary);
    }

    int c2f (int tempC){ //done
        int tempF = (int)(tempC * 1.8) + 32;
        return tempF;
    }

    int f2c (int tempF){ //done
        int tempC = (int)((tempF-32) *  0.5556);
        return tempC;
    }

    int factorial (int num){ //done
        int i,fact=1;  
        for(i=1;i<=num;i++){    
            fact=fact*i;    
        }    
        return fact;
    }

    int hex2dec (string hexa){
        int dec;
        stringstream ss;
        ss << hex << hexa;
        ss >> dec;
        return dec;
    }

    string dec2hex (int num){
        stringstream ss;
        ss << hex << num;
        string res = ss.str();
        transform(res.begin(), res.end(),res.begin(), ::toupper);
        return res;
    }

    int compareString (string str1, string str2){ //done
        if(str1.length() < str2.length()){
            return -1;
        } else if(str1.length() == str2.length()){
            if(str1 == str2){
                return 0;
            } else {
                return -1;
            }
        } else if(str1.length() > str2.length()){
            return 1;
        }
        return -2;
    }

    string trim (string cadena, string remover){ //done
        if(cadena[0] == remover[0]){
            cadena.erase(remove(cadena.begin(), cadena.end(), cadena[0]), cadena.end());
            return cadena;
        } else if(cadena[cadena.length()-1] == remover[0]){
            cadena.erase(remove(cadena.begin(), cadena.end(), cadena[cadena.length()-1]), cadena.end());
            return cadena;
        }
        return ""; //no existen los caracteres 
    }

    string repeat (string str, int cant){
        string res = "";
        for(int a = 0; a<cant; a++){
            res+=str;
        }
        return res;
    }

};

int main(){

    Funciones * funciones = new Funciones();
    cout<<funciones->bin2dec("1001")<<endl;
    cout<<funciones->dec2bin(9)<<endl;
    return 0;
}
