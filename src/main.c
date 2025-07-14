#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h> // ETH_P_ALL
#include <arpa/inet.h>
#include "pktcap.h"
#include <pthread.h>

#define BUFFER_SIZE 65536

int main() 
{

    // int sock_fd;
    // size_t num_bytes;
    // uint8_t * buff = (uint8_t *)malloc(BUFFER_SIZE);
    // pkt_cap_entry *pkt_entry = (pkt_cap_entry *)malloc(sizeof(pkt_cap_entry));
    
    // if (buff == NULL) 
    // {
    //     return 1;
    // }

    // memset(buff, 0, BUFFER_SIZE);

    // sock_fd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL)); /**  */
    // if (sock_fd < 0) 
    // {
    //     free(buff);
    //     free(pkt_entry);
    //     return 1;
    // }

    // printf("Starting packet capture...\nPress Ctrl+C to stop.\n");

    // while (1) 
    // {
    //     num_bytes = recvfrom(sock_fd, buff, BUFFER_SIZE, 0, NULL, NULL);
    //     if (num_bytes < 0) 
    //     {
    //         perror("Packet receive failed");
    //         break;
    //     }

    //     printf("Received packet of length %ld bytes\n", num_bytes);

    //     pkt_cap_gen(pkt_entry, buff, num_bytes);

    //     printf("Timestamp: %ld.%09ld\n", pkt_entry->timestamp.tv_sec, pkt_entry->timestamp.tv_nsec);
    //     printf("Received packet of length %ld bytes\n", pkt_entry->buff_len);

    //     // Optional: Print first few bytes of packet
    //     for (int i = 0; i < (num_bytes > 16 ? 16 : num_bytes); i++) 
    //     {
    //         printf("%02x ", buff[i]);
    //     }
        
    //     printf("\n\n");
    // }

    // close(sock_fd);
    // free(buff);
    // free(pkt_entry);
    return 0;
}
