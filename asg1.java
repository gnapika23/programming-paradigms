import java.util.Scanner;

public class asg1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of students");
        int n = sc.nextInt();
        String[] name = new String[n];
        int[] roll = new int[n];
        for(int i=0 ; i<n ; i++){
            System.out.println("enter the name  of the student ");
            name[i] = sc.next();

            System.out.println("enter roll number of the student ");
            roll[i] = sc.nextInt();

            System.out.println();
        }
        for(int i =0 ; i<n ; i++){
            System.out.println(name[i] + "\t\t" + roll[i] );
        }
    }
}
