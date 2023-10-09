package FibonacciSeriece;

import java.util.ArrayList;
import java.util.Arrays;

class Try {
    public static ArrayList<Integer> tryMe(int n){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int k=0, num1=0, num2=1, num3;

        while(k<n){
            num3 = num1 + num2;
            arr.addAll(Arrays.asList(num1, num2, num3));
            num1 = num2;
            num2 = num3;
            k=num3;
        }

        return arr;
    }
    public static void main(String arg[]){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr = tryMe(144);
        System.out.println(arr);
    }
    
}
