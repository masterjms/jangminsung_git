package staticex;

public class StudentTest2 {

	public static void main(String[] args) {
		Student1 studentLee = new Student1();
		studentLee.setStudentName("ÀÌÁö¿ø");
		System.out.println(studentLee.serialNum);
		System.out.println(studentLee.studentName + "ÇĞ¹ø : " + studentLee.studentID);
		
		Student1 studentSon = new Student1();
		studentLee.setStudentName("¼ÕÈï¹Î");
		System.out.println(studentSon.serialNum);
		System.out.println(studentSon.studentName + "ÇĞ¹ø : " + studentSon.studentID);

	}

}
