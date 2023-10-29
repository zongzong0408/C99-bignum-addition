#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define MAX 20

/*
    using std C99
    using utf-8 coding

    copyright @ zongzong
*/

uint32_t get_array_len(const char* s);
void check_array_is_positive_or_negative(char* s, uint32_t* len);
void convert_array_top_to_bottom(char* s, uint32_t* len);
void convert_array_char_to_int(char* s, const uint32_t len);
uint8_t check_compare_size(const char* s1, const uint32_t len1, const char* s2, const uint32_t len2);
uint8_t addition_situation(const char* s1, const uint32_t len1, const char* s2, const uint32_t len2);
void addition(const char* s1, const uint32_t len1, const char* s2, const uint32_t len2, char* s3);
void print_array(char mode, const char* s, const uint32_t len);

int main()
{
    char n1[MAX] = {0}, n2[MAX] = {0}, n3[MAX] = {0};
    /*
        char: -128 ~ 127
        n[[char], [char], [-128 ~ 127], ...etc]
    */
    uint32_t l1 = 0, l2 = 0, l3 = 0;

    scanf("%s", n1);
    l1 = get_array_len(n1);

    printf("%d\n", l1);
    print_array("c", n1, l1);

//    check_array_is_positive_or_negative(n1, &l1);
//    convert_array_top_to_bottom(n1, &l1);
//    convert_array_char_to_int(n1, l1);
//    print_array("i");

    return 0;
}

uint32_t get_array_len(const char* s)
{
    uint32_t len =  0;
    for (len; len < MAX; ++len)
    {
        if (s[len] == '\0')
        {
            break;
        }
    }

    return len;
}

void print_array(char mode, const char* s, const uint32_t len)
{
    if (mode == 'c')
    {
        for (uint32_t i = 0; i < len; ++i)
        {
            printf("%c", s[i]);
        }
    }
    else if (mode == 'i')
    {
        for (uint32_t i = 0; i < len; ++i)
        {
            printf("%d", s[i]);
        }
    }

    printf("\n");

    return;
}
