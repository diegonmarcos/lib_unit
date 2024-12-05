/* 
This a tester for the implementation of printf
*/

/* ****************************************************************************
 *                                COLORS                                   	  *
 ******************************************************************************/

#define DEL_LINE		"\033[2K"
#define ITALIC			"\033[3m"
#define BOLD			"\033[1m"
#define DEF_COLOR		"\033[0;39m"
#define GRAY			"\033[0;90m"
#define RED				"\033[0;91m"
#define GREEN			"\033[0;92m"
#define YELLOW			"\033[0;93m"
#define BLUE			"\033[0;94m"
#define MAGENTA			"\033[0;95m"
#define CYAN			"\033[0;96m"
#define WHITE			"\033[0;97m"
#define BLACK			"\033[0;99m"
#define ORANGE			"\033[38;5;209m"
#define BROWN			"\033[38;2;184;143;29m"
#define DARK_GRAY		"\033[38;5;234m"
#define MID_GRAY		"\033[38;5;245m"
#define DARK_GREEN		"\033[38;2;75;179;82m"
#define DARK_YELLOW		"\033[38;5;143m"

#include "my_headers.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
	printf(BLUE"\n ------------------------\n");
	printf("\n --- TESTS FOR PRINTF ---\n");
	printf(" ------------------------"DEF_COLOR"\n");

    printf(YELLOW"\n// --- TEST FOR %%s ---"DEF_COLOR"\n");
    char *str;
    // Test 1: Basic string
    str = "Hello, world!";
    printf("(%d) | ", printf("Expected:%s\n", str) - 9) == ft_printf("(%d) | ", ft_printf("Test:%s\n", str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    // Test 2: Empty string
    str = "";
    printf("(%d) | ", printf("Expected:%s\n", str) - 9) == ft_printf("(%d) | ", ft_printf("Test:%s\n", str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    // Test 3: String with special characters
    str = "This\tstring\nhas\tspecial\ncharacters.";
    printf("(%d) | ", printf("Expected:%s\n", str) - 9) == ft_printf("(%d) | ", ft_printf("Test:%s\n", str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    // Test 4: NULL string
    str = NULL;
    printf("(%d) | ", printf("Expected:%s\n", str) - 9) == ft_printf("(%d) | ", ft_printf("Test:%s\n", str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    // Test 5: Long string
    str = "This is a very long string that should exceed the buffer size to test if your ft_printf handles it correctly.";
    printf("(%d) | ", printf("Expected:%s\n", str) - 9) == ft_printf("(%d) | ", ft_printf("Test:%s\n", str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");

    printf(YELLOW"\n// --- TEST FOR %%d/%%i ---"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%d", 12345) - 9) == ft_printf("(%d) | ", ft_printf("Test:%d", 12345) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%i", -12345) - 9) == ft_printf("(%d) | ", ft_printf("Test:%i", -12345) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%d", 0) - 9) == ft_printf("(%d) | ", ft_printf("Test:%d", 0) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%d", 2147483647) - 9) == ft_printf("(%d) | ", ft_printf("Test:%d", 2147483647) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    //printf("(%d) | ", printf("Expected:%d", -2147483648) - 9) == ft_printf("(%d) | ", ft_printf("Test:%d", -2147483648) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");

    printf(YELLOW"\n// --- TEST FOR %%p ---"DEF_COLOR"\n");
    int a = 42;
    int *ptr = &a;
    printf("(%d) | ", printf("Expected:%p", ptr) - 9) == ft_printf("(%d) | ", ft_printf("Test:%p", ptr) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%p", NULL) - 9) == ft_printf("(%d) | ", ft_printf("Test:%p", NULL) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");


    printf(YELLOW"\n// --- TEST FOR %%u ---"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%u", 12345) - 9) == ft_printf("(%d) | ", ft_printf("Test:%u", 12345) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%u", 0) - 9) == ft_printf("(%d) | ", ft_printf("Test:%u", 0) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    //printf("(%d) | ", printf("Expected:%u", 4294967295) - 9) == ft_printf("(%d) | ", ft_printf("Test:%u", 4294967295) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");


    printf(YELLOW"\n// --- TEST FOR %%X ---"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%X", 42) - 9) == ft_printf("(%d) | ", ft_printf("Test:%X", 42) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%X", 12345) - 9) == ft_printf("(%d) | ", ft_printf("Test:%X", 12345) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%X", 0) - 9) == ft_printf("(%d) | ", ft_printf("Test:%X", 0) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");


    printf(YELLOW"\n// --- TEST FOR %%x ---"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%x", 42) - 9) == ft_printf("(%d) | ", ft_printf("Test:%x", 42) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%x", 12345) - 9) == ft_printf("(%d) | ", ft_printf("Test:%x", 12345) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%x", 0) - 9) == ft_printf("(%d) | ", ft_printf("Test:%x", 0) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");

	printf(YELLOW"\n// --- TEST FOR %%c ---"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%c", 'A') - 9) == ft_printf("(%d) | ", ft_printf("Test:%c", 'A') - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%c", '\t') - 9) == ft_printf("(%d) | ", ft_printf("Test:%c", '\t') - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%c", '\0') - 9) == ft_printf("(%d) | ", ft_printf("Test:%c", '\0') - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%c", '%') - 9) == ft_printf("(%d) | ", ft_printf("Test:%c", '%') - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
    printf("(%d) | ", printf("Expected:%c", ' ') - 9) == ft_printf("(%d) | ", ft_printf("Test:%c", ' ') - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");


	//TEST Malloc test
	char *ptr_test;
	ptr_test = (char *) malloc(10 * sizeof(char));
	strcpy(ptr_test, "Hello");
	printf("%s\n", ptr_test);

	return 0;
}