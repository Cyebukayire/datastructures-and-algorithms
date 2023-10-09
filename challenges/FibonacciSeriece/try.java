package FibonacciSeriece;

import java.util.ArrayList;

class Try {
    public static ArrayList<Integer> tryMe(int n){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int i=0, k=0;
        while(k<n){
            if(i<=1){
                arr.add(i);
            }else{
                k = arr.get(i-1) + arr.get(i-2);
                arr.add(k);
            }
            i++;
        }

        return arr;
    }
    public static void main(String arg[]){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr = tryMe(144);
        System.out.println(arr);
    }
    
}
