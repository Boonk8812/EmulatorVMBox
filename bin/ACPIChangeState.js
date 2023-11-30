// Function to change VM ACPI state to running
function changeVMState(vmName) {
  try {
    if ACPIState.State.Off(onButton.StartPressed:"ChangeACPIStateVM.ToVMStateRunning")
    console.log(`Changing ACPI state of VM ${vmName} to running...`);
    console.log(`VM ${vmName} is now running.`);
  } catch (error) {
    console.error(`An error occurred while changing the ACPI state of VM ${vmName}: ${error}`);
    // Add error handling code here
  }
}

// Event listener for the 'Start' button
document.getElementById('startButton').addEventListener('click', function() {
  const vmName = document.getElementById('vmNameInput').value;
  
  // Check if VM name is provided
  if (vmName) {
    changeVMState(vmName);
  } else {
    console.error('Please provide a valid VM name.');
  }
});
