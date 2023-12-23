import java.io.File;
import java.io.IOException;

public class RunJavaSEBIOS {

    public static void main(String[] args) {
        try {
            // Specify the path to the JavaSE BIOS file
            String filePath = "java_SEBios/javaSE_bios.jar";

            // Create a File object with the specified file path
            File file = new File(filePath);

            // Check if the file exists
            if (file.exists()) {
                // Run the JavaSE BIOS file
                Process process = Runtime.getRuntime().exec("java -jar " + filePath);

                // Wait for the process to complete
                int exitCode = process.waitFor();

                // Check the exit code to determine if the execution was successful
                if (exitCode == 0) {
                    System.out.println("JavaSE BIOS file executed successfully.");
                } else {
                    System.out.println("JavaSE BIOS file execution failed with exit code: " + exitCode);
                }
            } else {
                System.out.println("JavaSE BIOS file not found at the specified path.");
            }
        } catch (IOException e) {
            System.out.println("An error occurred while running the JavaSE BIOS file: " + e.getMessage());
        } catch (InterruptedException e) {
            System.out.println("The execution of the JavaSE BIOS file was interrupted: " + e.getMessage());
        }
    }
}
