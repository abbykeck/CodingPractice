import java.util.*;
import java.io.*;

public class ReadFile {
	public static void main (String[] args) {
		System.out.println("Hello world");
		new ReadFile();
	} // end main

	public ReadFile() {
		try {
			File file = new File("abc.txt");
			Scanner input = new Scanner(file);
			while (input.hasNext()) {
				System.out.println(input.nextLine() + ",");
			} // end while
			input.close();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		} // end try
	}
}
