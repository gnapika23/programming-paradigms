import java.util.Scanner;

public class student{
    String name;
    int age;
    String department;
    int year;


    void ReadDaat(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name: ");
        this.name = sc.nextLine();
        System.out.print("Enter age: ");
        this.age = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter department: ");
        this.department = sc.nextLine();
        System.out.print("Enter year: ");
        this.year = sc.nextInt();
    }

    void printData(){
        System.out.println();
        System.out.println("Name: "+this.name);
        System.out.println("Age: "+this.age);
        System.out.println("Department: "+this.department);
        System.out.println("Year: "+this.year);

    }

    public static void main(String[] args) {
        student Student = new student();
        Student.ReadDaat();
        Student.printData();
    }
}