/***********************************************************
Name: Justen Crockett
Assignment: 06 - FINAL PROJECT
Purpose:
Notes:
***********************************************************/

#ifndef DATA_H
#define DATA_H

struct Node {
    char val;
    int cost;
    Node *next;
};

struct Edge {
    int source, dest, weight;
};

#endif //DATA_H