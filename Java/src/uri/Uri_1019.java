package uri;

import java.util.Scanner;

public class Uri_1019 {

    public static void main(String[] args) {

        int seconds;

        try (Scanner leia = new Scanner(System.in)) {
            seconds = leia.nextInt();
        }
        int hours = seconds/3600;
        seconds = seconds - (hours *3600);

        int minutes = seconds/60;
        seconds = seconds -(minutes*60);

        System.out.println(hours+":"+minutes+":"+seconds);



    
    }
    
}

