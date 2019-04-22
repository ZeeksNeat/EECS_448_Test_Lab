#include <stdio.h>
#include <string>
#include "test.h"
#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;

void TestSuite::testAll() {

    testAddBack();
    testAddFront();
    testRemoveBack();
    testRemoveFront();
}

void TestSuite::testIsEmpty() {

    LinkedListOfInts list;
    if (list.isEmpty()) {
        printf("PASS");
    }
    else {
        printf("List should be empty");
    }
}

void TestSuite::testAddBack() {

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    if (list.isEmpty()) {
        printf("List is empty, should contain value 1");
    }
    else if (list.search(1) != true && list.search(2) != true) {
        printf("list should contain values 1 and 2");
    }
    else {
        printf("PASS");
    }
    
}

void TestSuite::testAddFront() {

    LinkedListOfInts list;
    list.addFront(1);
    list.addFront(2);
    if (list.isEmpty()) {
        printf("List is empty, should contain value 1");
    }
    else if (list.search(1) != true && list.search(2) != true) {
        printf("list should contain values 1 and 2");
    }
    else {
        printf("PASS");
    }
}

void TestSuite::testRemoveBack() {

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.removeBack();
    if (list.isEmpty()) {
        printf("List is empty, should contain values");
    }
    else if (list.size() != 2) {
        printf("List should be size 2");
    }
    else if (list.toVector()[0] != 1) {
        printf("Removed the wrong value");
    }
    else {
        printf("PASS");
    }
}

void TestSuite::testRemoveFront() {

    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.removeFront();
    if (list.isEmpty()) {
        printf("List is empty, should contain values");
    }
    else if (list.size() != 2) {
        printf("List should be size 2");
    }
    else if (list.toVector()[0] != 2) {
        printf("Removed wrong value");
    }
    else {
        printf("PASS");
    }
}