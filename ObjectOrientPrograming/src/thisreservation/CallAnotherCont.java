package thisreservation;

class Persontest {
	String name;
	int age;
	
	Persontest(){
		this("�̸�����",1);
	}
	
	Persontest(String name, int age){
		this.name = name;
		this.age = age;
	}
	
	Persontest returnItSelf() {  //��ȯ���� Ŭ������
		return this;
	}
}

public class CallAnotherCont {

	public static void main(String[] args) {
		Persontest noName = new Persontest();
		System.out.println(noName.name);
		System.out.println(noName.age);
		
		Persontest p = noName.returnItSelf(); //this���� Ŭ���� ������ ����
		System.out.println(p);    //noName.returnItSelf()�� ��ȯ�� ���
		System.out.println(noName); //�������� ���

	}

}
