#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h> // ETH_P_ALL
#include <arpa/inet.h>

#define BUFFER_SIZE 65536

int main() 
{
    int sock_fd;
    size_t num_bytes;
    uint8_t * buff = (uint8_t *)malloc(BUFFER_SIZE);
    
    if (buff == NULL) 
    {
        return 1;
    }

    memset(buff, 0, BUFFER_SIZE);

    sock_fd = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL)); /**  */
    if (sock_fd < 0) 
    {
        free(buff);
        return 1;
    }

    printf("Starting packet capture...\nPress Ctrl+C to stop.\n");

    while (1) 
    {
        num_bytes = recvfrom(sock_fd, buff, BUFFER_SIZE, 0, NULL, NULL);
        if (num_bytes < 0) {
            perror("Packet receive failed");
            break;
        }

        printf("Received packet of length %ld bytes\n", num_bytes);

        // Optional: Print first few bytes of packet
        for (int i = 0; i < (num_bytes > 16 ? 16 : num_bytes); i++) {
            printf("%02x ", buff[i]);
        }
        printf("\n\n");
    }

    close(sock_fd);
    free(buff);
    return 0;
}
