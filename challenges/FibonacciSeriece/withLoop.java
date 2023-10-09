package FibonacciSeriece;

/**
 * Fibonacci series is a sequence of numbers starting from zero up to n. Where each number is
 * is the sum of the two previous ones.
 */
import java.util.ArrayList;

class withLoop{
    public static ArrayList<Integer> fibonacci(int n){
        ArrayList <Integer> arr = new ArrayList<Integer>();

        int temp=0;
        int i=0;
        while(temp<n){
            if(i<=1){
                arr.add(i);
            }else{
                temp = arr.get(i-1) + arr.get(i-2); 
                arr.add(temp);
            }
            i++;
        }
        return arr;
    }
    public static void main(String []arg){
        ArrayList <Integer> arr = fibonacci(250);
        System.out.println(arr);
    }
}