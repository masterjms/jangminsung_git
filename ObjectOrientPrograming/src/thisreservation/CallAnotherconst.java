package thisreservation;

class Persontest {
	String name;
	int age;
	
	Persontest(){  //����Ʈ �����ڰ� ȣ��Ǵ� ��� �ʱ갪���� �̸������� 1�� ���Եȴ�.
		this("�̸�����",1);
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
