#include <iostream>

// object to represent lions in savannnah
class Lion
{
};

// savannah class
class Savannah
{

public:
    void feed_lion();
    void duplicate_lion(Lion lion);
    void kill_lion(Lion lion);
    void reset_savannah();
    void terminate_pride();


//getter and setter funnctions to create the savannah
    float get_savannah_width();
    float get_savannah_length();
    float get_savannah_diameter();

    float set_savannah_width();
    float set_savannah_length();
    float set_savannah_diameter();

private:
    /**
        These are the private variables we need to track of the savannnah
    **/
    static const int max_lion_population = 25;
    Lion lion_list[max_lion_population];
    float savannah_width;
    float savannah_length;
    float savannah_diameter;
};

int main()
{
    // Declare savannah
    Savannah savannah;
    std::cout << "savannah declared";
    return 0;
}