#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>

class Stopwatch {
private:
    std::chrono::time_point<std::chrono::steady_clock> start_time;
    std::chrono::time_point<std::chrono::steady_clock> end_time;
    bool running;

public:
    Stopwatch() : running(false) {}

    void start() {
        if (!running) {
            running = true;
            start_time = std::chrono::steady_clock::now();
        }
    }

    void stop() {
        if (running) {
            end_time = std::chrono::steady_clock::now();
            running = false;
        }
    }

    void reset() {
        running = false;
    }

    double elapsed_seconds() {
        if (running) {
            std::chrono::duration<double> elapsed = std::chrono::steady_clock::now() - start_time;
            return elapsed.count();
        } else {
            std::chrono::duration<double> elapsed = end_time - start_time;
            return elapsed.count();
        }
    }

    bool isRunning() const {
        if (running) return true;
        return false;
    }
};

int main() {
    Stopwatch stopwatch;
    char input;

    std::cout << "Press 's' to start, 'p' to pause, 'r' to reset, and 'q' to quit." << std::endl;

    while (true) {
        if (stopwatch.isRunning()) {
            std::cout << "\rElapsed time: " << stopwatch.elapsed_seconds() << " seconds     ";
            //_sleep(1000);
            //std::clrscr();
//            std::_sleep(1000);
//            std::cout << std::flush;
//            system ("CLS");
        } else {
            std::cin >> input;
            switch (input) {
                case 's':
                    stopwatch.start();
                    break;
                case 'p':
                    stopwatch.stop();
                    break;
                case 'r':
                    stopwatch.reset();
                    break;
                case 'q':
                    return 0;
                default:
                    std::cout << "Invalid input. Please try again." << std::endl;
            }

            std::cout << "\rElapsed time: " << stopwatch.elapsed_seconds() << " seconds     ";
        }
        //  std::flush; // Flush the output buffer to ensure immediate printing
    }

    return 0;
}
