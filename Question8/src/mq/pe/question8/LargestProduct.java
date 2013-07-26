package mq.pe.question8;

import java.io.*;

/**
 * Created with IntelliJ IDEA.
 * User: nam
 * Date: 25/07/13
 * Time: 3:11 PM
 * To change this template use File | Settings | File Templates.
 */
public class LargestProduct {
    public static void main(String[] args) {
        try {
            String thisLine = "";
            String str = "";
            // get the string of digits from the file
            BufferedReader br = new BufferedReader(new FileReader("number.txt"));
            while ((thisLine = br.readLine()) != null) {
                str = str + thisLine;
            }
            br.close();


            long largest=0;
            int i=str.length(); // start index at length of number (1000)
           // loop until index position is at the first digit
            while ( (i>=0) && (i-5)>=0) {
                String sub = str.substring(i-5, i); // extract the string of  5 consecutive digits
                System.out.println(sub);

                    /* as long as the extracted string of digits does not contain '0',
                       convert it to an integer, and multiply all the digits together
                    */
                    if (!sub.contains("0")) {
                        int num = Integer.parseInt(sub);
                        int digit = 0;
                        long prod = 1;
                        while (num!=0) {
                            digit = num % 10; // get right most digit as the current digit
                            num = num / 10;   // remove right most digit from the number
                            prod = prod * digit; // multiply the product by the current digit
                        }
                        // check if the product of these 5 digits is the largest so far
                        if (prod > largest)
                            largest = prod;
                    }
                i=i-1; // decrement the index position
            }
            // output the greatest product
            System.out.println("The largest product is " + largest);
        } catch (IOException e)
        {
            e.printStackTrace();
        }
    }
}
