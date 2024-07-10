#include <iostream>

int main()
{
    // Check if a character is blank in the message
    char message[100] = "Hello there. How are you doing? The sun is shining.";
    int blank_count = 0; // Settting count to 0

    for (int i = 0; i < 100; i++)
    {
        if (std::isblank(message[i]))
        {
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count; // Incrementing count
        }
    }

    // Total Count
    std::cout << "In total we found " << blank_count << " blank characters." << std::endl;
}