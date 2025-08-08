#include <stdio.h>
#include <string.h>

#define EXPECTED_VERSION "1.2.3"

const char* getCurrentVersion() {
    // You can replace this with actual logic if integrating with OS/package
    return "1.2.0"; 
}

void checkVersion(const char* currentVersion) {
    if (strcmp(currentVersion, EXPECTED_VERSION) == 0) {
        printf(" Version is correctly configured: %s\n", currentVersion);
    } else {
        printf(" ALERT: Misconfigured version detected!\n");
        printf("Expected: %s, Found: %s\n", EXPECTED_VERSION, currentVersion);
        // Optionally trigger some alert mechanism here
        // For example: send log, email, webhook, etc.
    }
}

int main() {
    const char* currentVersion = getCurrentVersion();
    checkVersion(currentVersion);
    return 0;
}
