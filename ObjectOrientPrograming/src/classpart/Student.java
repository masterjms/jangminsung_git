package classpart;

public class Student {
	int StudentID;
	String studentName;
	int grade;
	String address;
	
	public String getStudentName() {
		return studentName;
	}
	
	public static void main(String[] args) {
		Student studentAnh = new Student();
		studentAnh.studentName = "antdd";
		
		System.out.println(studentAnh.studentName);
		System.out.println(studentAnh.getStudentName());
	}

}
