#include <stdio.h>
#include <string>
#include "test.h"
#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;

void TestSuite::testAll() {

    testIsEmpty();
    testAddBack();
    testAddFront();
    testRemoveBack();
    testRemoveFront();
    testSize();
}

void TestSuite::testIsEmpty() {

    printf("\nIsEmpty");
    
    LinkedListOfInts list;
    if (list.isEmpty()) {
        printf("\nNew list - PASS");
    }
    list.addFront(1);
    if (list.isEmpty()) {
        printf("\nlist should be empty - FAIL");
    }
}

void TestSuite::testAddBack() {
    
    printf("\nAddBack");

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    if (list.isEmpty()) {
        printf("\nList is not empty - FAIL");
    }
    if (list.search(1) != true && list.search(2) != true) {
        printf("\nlist should contain values 1 and 2 - FAIL");
    }
    if (list.toVector()[1] != 2) {
        printf("\nindex 1 should be 2 - FAIL");
    }
    else {
        printf("\nPASS");
    }
    
}

void TestSuite::testAddFront() {
    
    printf("\nAddFront");

    LinkedListOfInts list;
    list.addFront(1);
    list.addFront(2);
    if (list.isEmpty()) {
        printf("\nList is not empty - FAIL");
    }
    if (list.search(1) != true && list.search(2) != true) {
        printf("\nlist should contain values 1 and 2 - FAIL");
    }
    if (list.toVector()[0] != 2) {
        printf("\nindex 0 should be 2 - FAIL");
    }
    else {
        printf("\nadded the right values - PASS");
    }
}

void TestSuite::testRemoveBack() {
    
    printf("\nRemoveBack");

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.removeBack();
    if (list.isEmpty()) {
        printf("\nList is empty, should contain values - FAIL");
    }
    if (list.size() != 2) {
        printf("\nList should be size 2 - FAIL");
    }
    if (list.toVector()[0] != 1) {
        printf("\nRemoved the wrong value - FAIL");
    }
    else {
        printf("\nPASS");
    }
}

void TestSuite::testRemoveFront() {
    
    printf("\nRemoveFront");

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.removeFront();
    if (list.isEmpty()) {
        printf("\nList is empty, should contain values");
    }
    if (list.size() != 2) {
        printf("\nList should be size 2");
    }
    if (list.toVector()[0] != 2) {
        printf("\nRemoved wrong value");
    }
    else {
        printf("\nPASS");
    }
}

void TestSuite::testSize() {
    
    printf("\nSize");
    
    LinkedListOfInts list;
    if (list.size() == 0) {
        printf("\nsize of new list is zero - PASS");
    }
    list.addFront(1);
    list.addFront(2);
    
    if (list.size() != 2) {
        printf("\nlist should be size 2 - FAIL");
    }
    list.removeFront();
    
    if (list.size() != 1) {
        printf("\nlist should be size 1 - FAIL");
    }
    
    else {
        printf("\nlist should be of size 2 - PASS");
    }
    printf("\n");
}
