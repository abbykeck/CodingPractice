public class SubClass {
	private int num3;
	public SubClass(int number1, int number2, int number3) {
		super(number1, number2);
		this.num3 = number3;
	}
	public int getNum3() {
		return num3;
	}
	public void setNum3(int newNum) {
		this.num3 = newNum;
	}
	public void printNums() {
		System.out.println(super.getNum1());
		System.out.println(super.getNum2());
		System.out.println(num3);
	}
}
