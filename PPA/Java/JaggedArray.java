import java.util.*;

class JaggedArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] arr = new int[3][];
        arr[0] = new int[6];
        arr[1] = new int[3];
        arr[2] = new int[4];

        for(int i = 0; i < arr.length; i++) {
            System.out.println("Array "+ (i+1));
            for(int j = 0; j < arr[i].length; j++) {
                System.out.println("Element "+ (j+1));
                arr[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < arr.length; i++) {
            System.out.println("Array "+ (i+1));
            for(int j = 0; j < arr[i].length; j++) {
                System.out.println(arr[i][j]);
            }
        }
    }
}