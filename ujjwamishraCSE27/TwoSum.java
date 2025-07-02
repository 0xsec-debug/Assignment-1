import java.util.Scanner;

public class TwoSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

       
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

       
        System.out.print("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        
        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();

        
        int i, j;
        boolean found = false;

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    System.out.println("Output: [" + i + ", " + j + "]");
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) {
            System.out.println("No two elements found that sum up to target.");
        }
    }
}

