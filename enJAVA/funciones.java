import java.lang.Math;

class Funciones {
    public static void main(String[] args) {
        System.out.println(repeat("hola",3));
        
    }

    public static int ping (String ip){
        return 0;
    }

    public static double pmt (double tasaI, int numPeriodos, double pv){ //done
        double resul = (pv*tasaI)/(1 - (Math.pow((1 + tasaI), -numPeriodos)));
        int res = (int)(resul);
        return res;
    }

    public static int bin2dec (String binary){
        int dec = Integer.parseInt(binary, 2);
        return dec;
    }

    public static String dec2bin (int valDec){ //done
        StringBuilder binary = new StringBuilder();
        int i =0;
        while (valDec > 0){
            binary.append(valDec%2);
            i++;
            valDec = valDec/2;
        }
        return binary.reverse().toString();
    }

    public static int c2f (int tempC){ //done
        int tempF = (int)(tempC * 1.8) + 32;
        return tempF;
    }

    public static int f2c (int tempF){ //done
        int tempC = (int)((tempF-32) *  0.5556);
        return tempC;
    }

    public static int factorial (int num){ //done
        int i,fact=1;  
        for(i=1;i<=num;i++){    
            fact=fact*i;    
        }    
        return fact;
    }

    public static int hex2dec (String hexa){
        int decimal = Integer.parseInt(hexa,16);  
        return decimal;
    }

    public static String dec2hex (int num){
        String hexa = Integer.toHexString(num);
        return hexa;
    }

    public static int compareString (String str1, String str2){ //done
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

    public static String trim (String cadena, String remover){ //done
        if(cadena.charAt(0) == remover.charAt(0)){
            StringBuilder sb = new StringBuilder(cadena);
            String n = sb.deleteCharAt(0).toString();
            return n;
        } else if(cadena.charAt(cadena.length()-1) == remover.charAt(0)){
            StringBuilder sb = new StringBuilder(cadena);
            String n = sb.deleteCharAt(cadena.length()-1).toString();
            return n;
        }
        return ""; //no existen los caracteres 
    }

    public static String repeat (String str, int cant){
        String res = "";
        for(int a = 0; a<cant; a++){
            res+=str;
        }
        return res;
    }



}