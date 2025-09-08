import java.util.Scanner;
import java.util.ArrayList;
public class GroceryList {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String item = "";
		ArrayList<String> groceries = new ArrayList<String>();
		System.out.println("Grocery list");
		while (!(item.equals("exit"))) {
			System.out.println("Enter an item (enter \"exit\" to quit): ");
			item = input.nextLine();
			if (item.equals("exit")) {
				break;
			}
			else {
				groceries.add(item);
			}
		}
		System.out.println("\nHere is your grocery list:");
		for (String listItem : groceries) {
			System.out.println(listItem);
		}
	}
}
