#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cop[69];

void sponsor(void) {
    printf("But first, a message from our sponsor Raid Shadow Legends.\n");
    printf("Raid Shadow Legends is an awesome (bad) game with uhh... game stuff\n");
}

void copilot(void) {
    while (1) {
        printf("ask me anything (/exit to exit)> ");
        fflush(stdout);
        fgets(cop, sizeof(cop), stdin);

        // could have just done cop[strcspn(cop, "\n")] = '\0' but this needs to feel vibe coded
        if (strcmp(cop, "/exit\n") == 0) {
            break;
        }
        else {
        printf("Sorry, we are having unexpected issues, please try again later\n");
        }
    }
}

int main(void) {
    char buf[250];

    printf("windows 11 simulator\n");
    printf("microslop 2026\n");

    while (1) {
        printf("PS C:\\> ");
        fflush(stdout);
        fgets(buf, sizeof(buf), stdin);
        buf[strcspn(buf, "\n")] = '\0';

        if (strcmp(buf, "help") == 0) {
            printf("windows 11 simulator\n");
            printf("type \"copilot\" to access copilot\n");
            printf("available commands:\n");
            printf("exit - exits slopshell\n");
            printf("help - prints this detailed help menu\n");
            printf("dir - lists items in a directory\n");
            printf("clear - clears the screen\n\n");
            printf("If you need more help, type \"copilot\" and let our secure assistant help you\n");
        }
        else if (strcmp(buf, "exit") == 0) {
            printf("Copilot: wait dont exit yet,");
            sponsor();
            // but for real to exit do SIGINT
        }
        else if (strcmp(buf, "clear") == 0 || strcmp(buf, "cls") == 0) {
            system("clear");
            printf("Copilot: the \"clear\" command can clear the screen\n");
        }
        else if (strncmp(buf, "dir", 3) == 0 || strncmp(buf, "ls", 2) == 0) {
            printf("Copilot: sorry, i could not show your files as they are all deleted and uploaded to microslop\n");
        }
        else if (strcmp(buf, "copilot") == 0) {
            copilot();
        }
        else if (strcmp(buf, "") == 0 || strncmp(buf, " ", 1) == 0) {
            printf("Copilot: did you mean to type something? if yes, im ready to help!\n");
        }
        else {
            printf("Copilot: did you mean: \"how do i put even more slop into windows 11?\"\n");
        }
    }
    return 0;
}
