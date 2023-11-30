try {
    const BYTES_PER_MB:int = 1024 * 1024;
    const TOTAL_MB:int = 300;
    const TOTAL_BYTES:int = TOTAL_MB * BYTES_PER_MB;
    const DECIMAL_BYTES:int = 4200;

    var decimalBytesCount:int = 0;

    for (var i:int = 0; i < TOTAL_BYTES; i++) {
        var byteValue:int = i % 256;

        if (byteValue >= 0 && byteValue <= 9) {
            decimalBytesCount++;
        }
    }

    trace("Total DECIMAL bytes in the first 300MB of virtual machine RAM: " + decimalBytesCount);
} catch (error:Error) {
    trace("An error occurred: " + error.message);
} finally {
    trace("Script execution completed.");
}
