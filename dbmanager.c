#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ledger.h"

int main(void) {
    const char* key1 = "hash1";
    const char* key2 = "hash2";
    const char* key3 = "hash3";

    printf("%d %d %d\n", get_ref_count(key1),
                         get_ref_count(key2),
                         get_ref_count(key3) );
    printf("Is garbage == %d\n", is_garbage(key1));

    dec_ref_count(key1);
    inc_ref_count(key2);
    inc_ref_count(key3);

    printf("%d %d %d\n", get_ref_count(key1),
                         get_ref_count(key2),
                         get_ref_count(key3) );
    printf("Is garbage == %d\n", is_garbage(key1));
}
