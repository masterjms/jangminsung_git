package thisreservation;

class Persontest {
	String name;
	int age;
	
	Persontest(){  //디폴트 생성자가 호출되는 경우 초깃값으로 이름없음과 1이 대입된다.
		this("이름없음",1);
	}
	
	Persontest(String name, int age){
		this.name = name;
		this.age = age;
	}
}
public class CallAnotherconst {

	public static void main(String[] args) {
		Persontest noName = new Persontest();
		System.out.println(noName.name);
		System.out.println(noName.age);

	}

}
