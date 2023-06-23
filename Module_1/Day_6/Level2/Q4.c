#include <stdio.h>

#define MAX_SIZE 100
struct Member {
    int id;
    char name[50];
};
void rotateMembers(struct Member members[], int numMembers, int k) {
    struct Member temp[MAX_SIZE];
    int i, j;
    for (i = 0; i < k; i++) {
        temp[i] = members[i];
    }
    for (i = 0, j = k; j < numMembers; i++, j++) {
        members[i] = members[j];
    }
    for (j = 0; i < numMembers; i++, j++) {
        members[i] = temp[j];
    }
}

int main() {
    struct Member members[MAX_SIZE];
    int numMembers, k;
    printf("Enter the number of members: ");
    scanf("%d", &numMembers);

    for (int i = 0; i < numMembers; i++) {
        printf("Enter the ID for member %d: ", i+1);
        scanf("%d", &members[i].id);

        printf("Enter the name for member %d: ", i+1);
        scanf("%s", members[i].name);
    }

    printf("\nEnter the number of positions to rotate: ");
    scanf("%d", &k);

    rotateMembers(members, numMembers, k);

    printf("\nArray of members after rotation:\n");
    for (int i = 0; i < numMembers; i++) {
        printf("Member %d:\n", i+1);
        printf("ID: %d\n", members[i].id);
        printf("Name: %s\n", members[i].name);
        printf("\n");
    }

    return 0;
}
