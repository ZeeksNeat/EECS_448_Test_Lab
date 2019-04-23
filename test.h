#ifndef TEST
#define TEST

class TestSuite
{
  public:
    void testAll();

  private:
    void testIsEmpty();
    void testAddBack();
    void testAddFront();
    void testRemoveBack();
    void testRemoveFront();
    void testOrdering();
    void testSize();
};

#endif
