public class asg3 {
    static class person{
        String name;
        int age;
        String gender;
        String department;

        public person(String name , int age, String gender , String department){
            this.name = name;
            this.age = age;
            this.gender = gender;
            this.department = department;
        }

        public void display(){
            System.out.println("name:\t\t" + name);
            System.out.println("age:\t\t" + age);
            System.out.println("gender:\t\t"+gender);
            System.out.println("department\t"+department);

        }
    }

    static class StudenT extends person{
        int year;
        public StudenT(String name, int age, String gender, String dept, int year) {
            super(name, age, gender, dept);
            this.year = year;
        }

        public void display() {
            super.display();
            System.out.println("Year:\t\t" + this.year);
            System.out.println();
        }
    }

    static class Professor extends person {
        int courseLoad;
        double salary;

        public Professor(String name, int age, String gender, String dept, int courseLoad, double salary) {
            super(name, age, gender, dept);
            this.courseLoad = courseLoad;
            this.salary = salary;
        }

        public void display() {
            super.display();
            System.out.println("Course Load:\t" + this.courseLoad);
            System.out.println("Salary:\t\t" + this.salary);
            System.out.println();
        }
    }

    public static void main(String[] args) {
        StudenT s = new StudenT("gnapika", 19, "female", "computer science", 2);
        s.display();
        Professor p  = new Professor("aune", 35, "Male", "computer science", 3, 75000);
        p.display();
    }
}
