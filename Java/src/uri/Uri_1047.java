package uri;

import java.util.*;

public class Uri_1047{

    public static void main(String[] args){

        int total, hora_total, minuto_total, hora_inicial, hora_final, minuto_inicial, minuto_final, inicio_total, final_total;
        try (Scanner read = new Scanner(System.in)) {
            hora_inicial = read.nextInt();
            minuto_inicial = read.nextInt();
            hora_final = read.nextInt();
            minuto_final = read.nextInt();
        }
        inicio_total = hora_inicial * 60 + minuto_inicial;
        final_total = hora_final * 60 + minuto_final;

        if(inicio_total == final_total)
            System.out.println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        else if(inicio_total > final_total)
        {
            total = inicio_total - 1440;
            total = Math.abs(total) + final_total;
            hora_total = total / 60;
            minuto_total = total % 60;
            System.out.println("O JOGO DUROU "+hora_total+" HORA(S) E "+minuto_total+" MINUTO(S)");
            
        }
        else
        {
            total = final_total - inicio_total;
            hora_total = total / 60;
            minuto_total = total % 60;
            System.out.println("O JOGO DUROU "+hora_total+" HORA(S) E "+minuto_total+" MINUTO(S)");

        }
        
    }

}