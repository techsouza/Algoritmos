package uri;


import java.util.Scanner;



public class Uri_1009 {

	

	public static void main(String[] args) {

		

	  double salary = 0,value, TOTAL;

	  try (Scanner sc = new Scanner(System.in)) {
        sc.next();

        salary = sc.nextDouble();

        value = sc.nextDouble();
    }

	  TOTAL = salary + value * 0.15;

	  System.out.printf("TOTAL = R$ %.2f\n",TOTAL);

		  

	}

}