package staticex;

public class Student {
	public static int serialNum = 1000; //클래스 내부에 선언되어 모든 인스턴스가 공유한다.
	public int studentID;
	public String studentName;
	public int grade;
	public String address;
	
	public String getStudentName() {
		return studentName;
	}
	
	public void setStudentName(String name) {
		studentName = name;
	}
}
