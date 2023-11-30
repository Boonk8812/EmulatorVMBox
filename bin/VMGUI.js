class JS_GUIvmemulator();
{

// Code to Generate VM GUI

// Create a drop-down menu to select the operating system
const osOptions = ['BSD', 'Windows', 'Other', 'Linux', 'UnixyOS', 'Android', 'Unknown'];
const osDropdown = document.createElement('select');
osOptions.forEach((option) => {
  const osOption = document.createElement('option');
  osOption.value = option;
  osOption.text = option;
  osDropdown.appendChild(osOption);
});

// Create an input field to specify the VM name
const nameInput = document.createElement('input');
nameInput.type = 'text';
nameInput.placeholder = 'Enter VM Name';

// Create a slider to allocate RAM
const ramSlider = document.createElement('input');
ramSlider.type = 'range';
ramSlider.min = '100';
ramSlider.max = '1024';
ramSlider.step = '100';
ramSlider.value = '100';

// Create a button to add virtual storage devices
const addStorageButton = document.createElement('button');
addStorageButton.textContent = 'Add Storage Device';

// Create a slider to configure the number of CPUs
const cpuSlider = document.createElement('input');
cpuSlider.type = 'range';
cpuSlider.min = '1';
cpuSlider.max = '10';
cpuSlider.step = '1';
cpuSlider.value = '1';

// Create a button to finish VM creation
const finishButton = document.createElement('button');
finishButton.textContent = 'Finish';

// Append all elements to the VM Creation Window
const vmCreationWindow = document.getElementById('vm-creation-window');
vmCreationWindow.appendChild(osDropdown);
vmCreationWindow.appendChild(nameInput);
vmCreationWindow.appendChild(ramSlider);
vmCreationWindow.appendChild(addStorageButton);
vmCreationWindow.appendChild(cpuSlider);
vmCreationWindow.appendChild(finishButton);

// Event listener for the finish button
finishButton.addEventListener('click', () => {
  // Validate user inputs and handle errors
  const osSelection = osDropdown.value;
  const vmName = nameInput.value;
  const ramSize = ramSlider.value;
  const cpuCount = cpuSlider.value;

  if (vmName === '') {
    alert('Please enter a valid VM name.');
    return;
  }

  // Generate VM files and save them in the appropriate directory
  const vmDirectory = `/VMEmulatorBox/VMs/${vmName}`;
  // Code to create VM files in the specified directory

  // Display an overview of the selected options to the user
  const overview = `Operating System: ${osSelection}\nVM Name: ${vmName}\nRAM Size: ${ramSize} MB\nCPU Count: ${cpuCount}`;
  alert(`VM created successfully!\n\n${overview}`);
});

  
}
