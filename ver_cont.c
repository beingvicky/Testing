#include <stdio.h>
#include <string.h>

#define EXPECTED_VERSION "1.2.3"

const char* getCurrentVersion() {

    return "1.2.0"; 
}

void checkVersion(const char* currentVersion) {
    if (strcmp(currentVersion, EXPECTED_VERSION) == 0) {
        printf(" Version is correctly configured: %s\n", currentVersion);
    } else {
        printf(" ALERT: Misconfigured version detected!\n");
        printf("Expected: %s, Found: %s\n", EXPECTED_VERSION, currentVersion);

    }
}

int main() {
    const char* currentVersion = getCurrentVersion();
    checkVersion(currentVersion);
    return 0;
}
