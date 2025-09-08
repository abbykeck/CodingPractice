public class SuperRunner {
	public static void main(String[] args) {
		SuperClass obj1 = new SuperClass(1, 2);
		SubClass obj2 = new SubClass(3, 4, 5);
		obj1.printNums();
		obj2.printNums();
	}
}
