#include <stdio.h>

#define MAX_SIZE 100

struct Member {
    int id;
    char name[50];
};
void swapMembers(struct Member members[], int index1, int index2) {
    struct Member temp = members[index1];
    members[index1] = members[index2];
    members[index2] = temp;
}

int main() {
    struct Member members[MAX_SIZE];
    int numMembers, index1, index2;
    printf("Enter the number of members: ");
    scanf("%d", &numMembers);
    for (int i = 0; i < numMembers; i++) {
        printf("Enter the ID for member %d: ", i+1);
        scanf("%d", &members[i].id);

        printf("Enter the name for member %d: ", i+1);
        scanf("%s", members[i].name);
    }
    printf("\nEnter the indexes (starting from 0) of the members to swap:\n");
    printf("Index 1: ");
    scanf("%d", &index1);
    printf("Index 2: ");
    scanf("%d", &index2);
    swapMembers(members, index1, index2);

    printf("\nArray of members after swapping:\n");
    for (int i = 0; i < numMembers; i++) {
        printf("Member %d:\n", i+1);
        printf("ID: %d\n", members[i].id);
        printf("Name: %s\n", members[i].name);
        printf("\n");
    }

    return 0;
}
