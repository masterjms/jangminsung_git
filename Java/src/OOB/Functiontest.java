package OOB;

public class Functiontest {

	public static void main(String[] args) {
		int num1 = 10;
		int num2 = 20;
		
		int sum = add(num1,num2);
		System.out.println(num1 + "+" + num2 + "=" + sum + "ÀÔ´Ï´Ù.");
	}
	
	public static int add(int i, int j) {
		int result = i+j;
		return result;
	}

}
