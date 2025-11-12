public class Factorial {
	public static void main(String[] args) {
		System.out.println("Factorials\n");
		new Factorial();
	}
	public Factorial() {
		System.out.println("Factorial of 1: " + calcFactorial(1));
		System.out.println("Factorial of 2: " + calcFactorial(2));
		System.out.println("Factorial of 5: " + calcFactorial(5));
		System.out.println("Factorial of 10: " + calcFactorial(10));
	} // end constructor
	public long calcFactorial(long x) {
		if (x == 0) {
			return 1;
		} else if (x < 0) {
			System.out.println("Factorial is not defined for this number");
			return 0;
		} else {
			return (x * calcFactorial(x - 1));
		} // end if
	} // end calcFactorial
} // end Factorial
