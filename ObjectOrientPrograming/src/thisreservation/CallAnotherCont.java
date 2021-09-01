package thisreservation;

class Persontest {
	String name;
	int age;
	
	Persontest(){
		this("이름없음",1);
	}
	
	Persontest(String name, int age){
		this.name = name;
		this.age = age;
	}
	
	Persontest returnItSelf() {  //반환형은 클래스형
		return this;
	}
}

public class CallAnotherCont {

	public static void main(String[] args) {
		Persontest noName = new Persontest();
		System.out.println(noName.name);
		System.out.println(noName.age);
		
		Persontest p = noName.returnItSelf(); //this값을 클래스 변수에 대입
		System.out.println(p);    //noName.returnItSelf()의 반환값 출력
		System.out.println(noName); //참조변수 출력

	}

}
