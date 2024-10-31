
package codeforces.b.trace;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author vtdan
 */
public class BTrace {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        final double pi = 3.14159265359;
        double area = 0;
        int n = sc.nextInt();
        Integer[] ri = new Integer [n];
                
        for(int i=0;i<n;i++){
            ri[i]=sc.nextInt();
        }
        //
        Arrays.sort(ri,Collections.reverseOrder());
        //Arrays.sort(ri);
        
        System.out.println("");
        for(int i=0;i<n;i++){
            //rojo suma
            if(i%2==0){
                area += (pi*(ri[i]*ri[i]));
            }
            //azul resta
            else{
                area -= (pi*(ri[i]*ri[i]));
            }
        }
        System.out.println(area);
    }
    
}
