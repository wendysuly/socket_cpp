#ifndef SocketClientDelegate_h
#define SocketClientDelegate_h

class SocketClientDelegate {
public:
    virtual void onSocketMessageReceive(std::string &message) = 0;
};

#endif
