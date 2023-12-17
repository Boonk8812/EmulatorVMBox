int main() {

#include <bin/>
#include <scripts/>
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

// Function to handle button click event
void on_button_clicked(GtkWidget *widget, gpointer data)
{
    g_print("Button clicked!\n");
}

int main(int argc, char *argv[])
{
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "EmulatorVMBox");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 400, 300);

    // Create a vertical box container
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create buttons
    GtkWidget *buttonAddVM = gtk_button_new_with_label("Add VM");
    GtkWidget *buttonCreateVM = gtk_button_new_with_label("Create VM");
    GtkWidget *buttonSettings = gtk_button_new_with_label("Settings");
    GtkWidget *buttonInfo = gtk_button_new_with_label("Info");
    GtkWidget *buttonConnectByteTech = gtk_button_new_with_label("Connect ByteTech Account");
    GtkWidget *buttonCloseProgram = gtk_button_new_with_label("Close Program");

    // Add buttons to the vertical box container
    gtk_box_pack_start(GTK_BOX(vbox), buttonAddVM, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), buttonCreateVM, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), buttonSettings, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), buttonInfo, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), buttonConnectByteTech, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), buttonCloseProgram, TRUE, TRUE, 0);

    // Connect button click event to the handler function
    g_signal_connect(buttonAddVM, "clicked", G_CALLBACK(on_button_clicked), NULL);
    g_signal_connect(buttonCreateVM, "clicked", G_CALLBACK(on_button_clicked), NULL);
    g_signal_connect(buttonSettings, "clicked", G_CALLBACK(on_button_clicked), NULL);
    g_signal_connect(buttonInfo, "clicked", G_CALLBACK(on_button_clicked), NULL);
    g_signal_connect(buttonConnectByteTech, "clicked", G_CALLBACK(on_button_clicked), NULL);
    g_signal_connect(buttonCloseProgram, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Show all widgets
    gtk_widget_show_all(window);

    // Run the main loop
    gtk_main();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to read the SCREEN_RESOLUTION from SETTINGS.INI file
char* readScreenResolution() {
    FILE* settingsFile = fopen("SETTINGS.INI", "r");
    char* resolution = NULL;
    char line[100];

    if (settingsFile != NULL) {
        while (fgets(line, sizeof(line), settingsFile) != NULL) {
            if (strstr(line, "SCREEN_RESOLUTION") != NULL) {
                strtok(line, "=");
                resolution = strtok(NULL, "=");
                break;
            }
        }
        fclose(settingsFile);
    }

    return resolution;
}

// Function to display the VM screen
void displayVMScreen() {
    char* screenResolution = readScreenResolution();

    if (screenResolution != NULL) {
        // Code to display the VM screen based on the screenResolution
        printf("Displaying VM screen with resolution: %s\n", screenResolution);
    } else {
        printf("Error: Failed to read SCREEN_RESOLUTION from SETTINGS.INI\n");
    }
}

// Function to show vCPU activity
void showvCPUActivity() {
    // Code to show vCPU activity
    printf("vCPU activity: ...\n");
}

// Function to show vDISK activity
void showvDISKActivity() {
    // Code to show vDISK activity
    printf("vDISK activity: ...\n");
}

// Function to show vRAM activity
void showvRAMActivity() {
    // Code to show vRAM activity
    printf("vRAM activity: ...\n");
}

// Function to show vWifi/Network activity
void showvWifiNetworkActivity() {
    // Code to show vWifi/Network activity
    printf("vWifi/Network activity: ...\n");
}

// Function to show Virtual Video RAM activity
void showVirtualVideoRAMActivity() {
    // Code to show Virtual Video RAM activity
    printf("Virtual Video RAM activity: ...\n");
}

int main() {
    displayVMScreen();
    showvCPUActivity();
    showvDISKActivity();
    showvRAMActivity();
    showvWifiNetworkActivity();
    showVirtualVideoRAMActivity();

    return 0;
}

  
}
