#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("hack.py", "w");
    
    if (file == NULL) {
        printf("Error creating the Python file!\n");
        return 1;
    }
    
    // 2. Write the Python code into the file
    fprintf(file, "import time\nfor i in range(10000):\n    print(\"You've been hacked\")\n    time.sleep(0.5)");
    
    fclose(file);
    
    printf("Successfully created 'hacked.py'. Running it now...\n\n");
    
    int status = system("python3 hack.py");
    
    if (status == -1) {
        printf("Error executing python3 command.\n");
        return 1;
    }

    return 0;
}