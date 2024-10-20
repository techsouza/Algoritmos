package uri;

import java.util.Scanner;
/**
 *
 * @author w.souza
 */
public class Uri_1021 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int moeda, cedula, nota_100, nota_50, nota_20, nota_10, nota_5;
        int nota_2, moeda_1, moeda_50, moeda_25, moeda_10, moeda_05, moeda_01;
        double valor;
        
        try (Scanner leia = new Scanner(System.in)) {
          valor = leia.nextDouble();
        }
        
        cedula = (int) valor;
        moeda = (int) (valor * 100);
        moeda = moeda % 100;
        nota_100 = 0;
        nota_50 = 0;
        nota_20 = 0;
        nota_10 = 0;
        nota_5 = 0;
        nota_2 = 0;
        moeda_1 = 0;
        moeda_50 = 0;
        moeda_25 = 0;
        moeda_10 = 0;
        moeda_05 = 0;
        moeda_01 = 0;
        if (cedula >= 100)
        {
          nota_100 = cedula / 100;
          cedula = cedula % 100;
        }
        if (cedula >= 50 && cedula <=99)
        {
          nota_50 = cedula / 50;
          cedula = cedula % 50;
        }
        if (cedula >= 20 && cedula <= 49)
        {
          nota_20 = cedula / 20;
          cedula = cedula % 20;
        }
        if (cedula >= 10 && cedula <= 19)
        {
          nota_10 = cedula / 10;
          cedula = cedula % 10;
        }
        if (cedula >= 5 && cedula <= 9)
        {
          nota_5 = cedula / 5;
          cedula = cedula % 5;
        }
        if (cedula >= 2 && cedula <= 4)
        {
          nota_2 = cedula / 2;
          cedula = cedula % 2;
        }
        if (cedula == 1)
            moeda_1 = 1;
        if (moeda >= 50)
        {
          moeda_50 = moeda / 50;
          moeda = moeda % 50;
        }
        if (moeda >= 25 && moeda <=49)
        {
          moeda_25 = moeda / 25;
          moeda = moeda % 25;
        }
        if (moeda >= 10 && moeda <= 24)
        {
          moeda_10 = moeda / 10;
          moeda = moeda % 10;
        }
        if (moeda >= 5 && moeda <= 9)
        {
          moeda_05 = moeda / 5;
          moeda = moeda % 5;
        }
        if (moeda >= 1 && moeda <= 4)
          moeda_01 = moeda;
        
        System.out.printf ("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", nota_100, nota_50, nota_20, nota_10, nota_5, nota_2);
        System.out.printf ("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moeda_1, moeda_50, moeda_25, moeda_10, moeda_05, moeda_01);

    }
    
}
