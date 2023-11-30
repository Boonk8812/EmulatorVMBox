function sendValuesToVirtualCPUs() {
  try {
    const vCPUs = getAllvCPUs(); // Function to get all vCPUs of the VM
    const dataToSend = [0x0000001B, 0x555555515AB, 0xFF63904802, 0x88888884, 0x000000001A, 0x0000000004BC5];
    
    for (let i = 0; i < vCPUs.length; i++) {
      for (let j = 0; j < 1500; j++) {
        sendDataTovCPU(vCPUs[i], dataToSend);
      }
    }
    
    clearSentData();
    
    console.log("Data sent successfully to all vCPUs.");
  } catch (error) {
    console.error("An error occurred while sending data to vCPUs:", error);
  }
}

function getAllvCPUs() {

  getvCPU(allCPUs.InVirtualMachine)
}

function sendDataTovCPU(vCPU, data) {
  sendDataInConst(1).
}

function clearSentData() {
  clear(DataInCPU.sentData();. )
}
