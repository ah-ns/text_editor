#include <stdio.h>

int main(int argc, char ** argv)
{
				if (argc != 2)
				{
								printf("Usage: ./editor [filename]");
								return 1;
				}

				char * fname = argv[1];

				FILE * file_ptr = fopen(fname, "r+");
				char buffer[200];

				if (file_ptr == NULL)
				{
								printf("Error opening file");
								return 2;
				}

				while (fgets(buffer, 200, file_ptr) != NULL)
								printf("%s", buffer);

				fclose(file_ptr);
				return 0;
}
