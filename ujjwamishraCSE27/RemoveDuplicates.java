import java.util.Scanner;

public class RemoveDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

        System.out.print("Enter the sorted elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        
        if (n == 0) {
            System.out.println("Unique count: 0");
            return;
        }

        int k = 1; 

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

       
        System.out.println("Unique count: " + k);
        System.out.print("Modified array: ");
        for (int i = 0; i < k; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
}
