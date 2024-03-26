
#ifndef INTSET_H
#define INTSET_H

#include <iostream>

class intSet {
private:
    int* data; // Pointer to the array holding the set elements.
    int size;  // Number of elements currently in the set.
    int capacity;  // Current capacity of the array.

    void resize(); // Private helper function to resize the array.

public:
    intSet(); // Default constructor.
    explicit intSet(int initialCapacity); // Constructor with specified initial capacity.
    ~intSet(); // Destructor.
    intSet(const intSet& other); // Copy constructor.
    intSet(intSet&& other) noexcept; // Move constructor.
    intSet& operator=(const intSet& other); // Copy assignment operator.
    intSet& operator=(intSet&& other) noexcept; // Move assignment operator.

    bool add(int e); // Add element to the set.
    void remove(int e); // Remove element from the set.
    bool contains(int e) const; // Check if the set contains a specific element.
    bool isSubset(const intSet& other) const; // Check if this set is a subset of another.

    // Set operations
    intSet operator+(const intSet& other) const; // Set union.
    intSet operator*(const intSet& other) const; // Set intersection.
    bool operator==(const intSet& other) const; // Set equality.

    // Friends
    friend std::ostream& operator<<(std::ostream& os, const intSet& set); // Output operator.
};

#endif // INTSET_H
