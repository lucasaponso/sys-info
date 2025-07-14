#include <stdint.h>
#include <time.h>

#define BUFFER_SIZE 65536

typedef struct
{
    uint8_t buff[BUFFER_SIZE];
    size_t buff_len;
    struct timespec timestamp;

} pkt_cap_entry;

void pkt_cap_gen(pkt_cap_entry * pkt_entry, uint8_t * buff, size_t buff_len);