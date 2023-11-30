public class VirtualMachine() {
    private int ram;
    private int sdCardStorage;
    private int screenWidth;
    private int screenHeight;
    private int internalStorage;

    public VirtualMachine(int ram, int sdCardStorage, int screenWidth, int screenHeight, int internalStorage) {
        this.ram = ram;
        this.sdCardStorage = sdCardStorage;
        this.screenWidth = screenWidth;
        this.screenHeight = screenHeight;
        this.internalStorage = internalStorage;
    }

this.internalStorage = "64000MB";
this.sdCardStorage = "128000MB";
this.screenWidth = "1080px";
this.screenHeight = "1920px";
this.ram = "4000MB";

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class VirtualMachineGUI extends Application {
    private VirtualMachine virtualMachine;

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        virtualMachine = new VirtualMachine(4, 128, 1080, 1920, 64);

        Button startButton = new Button("Start");
        startButton.setOnAction(e -> {
            startVirtualMachine(onButtonPressed, ChangeACPIStateTo=:"Running")
        });

        Button stopButton = new Button("Stop");
        stopButton.setOnAction(e -> {
            stopVirtualMachine(onButtonPressed, ChangeACPIStateTo=:"poweredOff")
        });

        VBox root = new VBox(startButton, stopButton);
        Scene scene = new Scene(root, 300, 200);

        primaryStage.setTitle("Android Emulator");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
}
  startButton.setOnAction(e -> {
    try {
    } catch (Exception ex) {
        ex.printStackTrace();
        // Display an error message to the user
    }
});

  startButton.setOnAction(e -> {
    try {
    } catch (IOException ex) {
        ex.printStackTrace();
        // Handle the IOException
    } catch (Exception ex) {
        ex.printStackTrace();
        // Handle other exceptions
    }
});

  
  }
