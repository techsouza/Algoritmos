package uri;

import java.util.*;

public class Uri_1048{

    public static void main(String[] args){

       try (Scanner read = new Scanner(System.in)) {
        double salario, reajuste=0;
           int percentual=0;

           salario = read.nextDouble();
           if(salario >= 0 && salario <= 400.00)
        {
            reajuste = salario * 0.15;
            salario = salario + reajuste;
            percentual = 15;
        }
        else if (salario >= 400.01 && salario <= 800.00)
        {
            reajuste = salario * 0.12;
            salario = salario + reajuste;
            percentual = 12;
        }
        else if (salario >= 800.01 && salario <= 1200.00)
        {
            reajuste = salario * 0.10;
            salario = salario + reajuste; 
            percentual = 10;
        }
        else if (salario >= 1200.01 && salario <= 2000.00)
        {
            reajuste = salario * 0.07;
            salario = salario + reajuste;
            percentual = 7;
        }
        else if (salario > 2000.00)
        {
            reajuste = salario * 0.04;
            salario = salario + reajuste;
            percentual = 4;
        }
        System.out.printf("Novo salario: %.2f\nReajuste ganho: %.2f\n", salario, reajuste);
        System.out.println("Em percentual: "+percentual+" %");
    }
    }
}
