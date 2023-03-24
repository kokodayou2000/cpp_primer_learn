#ifndef FRIEND
#define FRIEND

class FriendClass
{
public:
    int b_;
    FriendClass(int b) : b_(b) {}
    void func(int);
};

#endif