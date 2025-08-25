public class SuperClass {
	private int num1;
	private int num2;
	public SuperClass(int number1, int number2) {
		this.num1 = number1;
		this.num2 = number2;
	}
	public int getNum1() {
		return num1;
	}
	public int getNum2() {
		return num2;
	}
	public void setNum1(int newNum) {
		this.num1 = newNum;
	}
	public void setNum2(int newNum) {
		this.num2 = newNum;
	}
	public void printNums() {
		System.out.println("num1: " + num1);
		System.out.println("num2: " + num2);
	}
}
