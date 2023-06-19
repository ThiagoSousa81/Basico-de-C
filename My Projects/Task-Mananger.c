#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a estrutura de uma tarefa
typedef struct task {
    char description[100];
    int priority;
    char category[50];
    struct task *next;
} Task;

// Função para criar uma nova tarefa
Task* create_task(char *description, int priority, char *category) {
    Task *new_task = (Task*) malloc(sizeof(Task));
    strcpy(new_task->description, description);
    new_task->priority = priority;
    strcpy(new_task->category, category);
    new_task->next = NULL;
    return new_task;
}

// Função para adicionar uma nova tarefa à lista
void add_task(Task **list, char *description, int priority, char *category) {
    Task *new_task = create_task(description, priority, category);

    if (*list == NULL) {
        *list = new_task;
    } else {
        Task *curr_task = *list;
        Task *prev_task = NULL;

        while (curr_task != NULL && curr_task->priority >= new_task->priority) {
            prev_task = curr_task;
            curr_task = curr_task->next;
        }

        if (prev_task == NULL) {
            new_task->next = *list;
            *list = new_task;
        } else {
            prev_task->next = new_task;
            new_task->next = curr_task;
        }
    }
}

// Função para imprimir a lista de tarefas
void print_tasks(Task *list) {
    Task *curr_task = list;

    while (curr_task != NULL) {
        printf("Description: %s\n", curr_task->description);
        printf("Priority: %d\n", curr_task->priority);
        printf("Category: %s\n", curr_task->category);
        printf("\n");
        curr_task = curr_task->next;
    }
}

int main() {
    Task *list = NULL;

    add_task(&list, "Estudar para a prova de matemática", 2, "Estudos");
    add_task(&list, "Lavar a louça", 1, "Casa");
    add_task(&list, "Fazer exercícios físicos", 3, "Saúde");

    print_tasks(list);

    return 0;
}
