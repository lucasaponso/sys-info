#include "pktcap.h"
#include <time.h>
#include <string.h>

void pkt_cap_gen(pkt_cap_entry * pkt_entry, uint8_t * buff, size_t buff_len)
{
    clock_gettime(CLOCK_REALTIME, &pkt_entry->timestamp);  // capture timestamp
    memset(pkt_entry->buff, 0, buff_len);
    strcpy(pkt_entry->buff, buff);
}

// struct timespec ts;
// clock_gettime(CLOCK_REALTIME, &ts);
// printf("Timestamp: %ld.%09ld\n", ts.tv_sec, ts.tv_nsec);