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
	printf(" --- TESTS FOR PRINTF ---\n");
	printf(" ------------------------"DEF_COLOR"\n");

	//TEST 1
	char str[] = "Hello";
	printf("(%d) | ", printf("Expected:%s",str) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
	//TEST 2
	char str1[] = "Hello\\t!";
	printf("(%d) | ", printf("Expected:%s",str1) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str1) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
	//TEST 1
	char str2[] = " ";
	printf("(%d) | ", printf("Expected:%s",str2) - 9) == ft_printf("(%d) | ",ft_printf("Test:%s",str2) - 5) ? printf(GREEN"OK"DEF_COLOR"\n") : printf(RED"KO"DEF_COLOR"\n");
	//TEST 1
	char *ptr;
	ptr = (char *) malloc(10 * sizeof(char));
	strcpy(ptr, "Hello");
	printf("%s\n", ptr);
	return 0;
}