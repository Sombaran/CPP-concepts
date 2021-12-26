#include <iostream>

typedef std::string mStringReceived;
typedef uint payloadsize;
struct request 
{
    const mStringReceived  stringID;
    const payloadsize      length;
};

struct response
{
    const mStringReceived  stringID;
    const payloadsize      length;
};


class driverTheme
{
    public:
    void display()
    {
        std::cout << "Output " << std::endl;
    }
    //std::shared_ptr<response> ;
};


int main()
{

}